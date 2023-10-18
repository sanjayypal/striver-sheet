/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
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

int lengthOfLoop(Node *head) {
    Node* start = firstNode(head);
    if(start==NULL)
    return 0;
    Node* temp=start;
    int count=0;
    while(temp->next!=start)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}
