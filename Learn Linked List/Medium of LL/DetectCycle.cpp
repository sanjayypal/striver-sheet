/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

// Approach 1
#include<bits/stdc++.h>
bool detectCycle(Node *head)
{
    if(head==NULL)
    return false;

    map<Node*,bool> visited;
    Node* temp = head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        return true;
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
}


// Approach 2
#include<bits/stdc++.h>
bool FloyedetectCycle(Node *head)
{
    if(head==NULL || head->next==NULL)
    return false;

    Node* slow = head;
    Node* fast = head;
    while(slow!= NULL && fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        fast = fast->next;

        slow = slow->next;
        if(slow==fast)
        return true;
    }
    return false;
}



