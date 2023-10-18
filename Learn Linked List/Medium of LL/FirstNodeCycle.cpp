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
#include<bits/stdc++.h>
Node* FloyedetectCycle(Node *head)
{
    Node* slow = head;
    Node* fast = head;
    while(slow!= NULL && fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        fast = fast->next;

        slow = slow->next;
        if(slow==fast)
        return slow;
    }
    return NULL;
}
Node *firstNode(Node *head)
{
    Node* intersection = FloyedetectCycle(head);
    if(intersection==NULL)
    return NULL;
    Node* slow = head;
    while(slow!=intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}