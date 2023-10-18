/*
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
*/

Node* deleteMiddle(Node* head){
    int N=0;
    Node* temp=head;
    if(head->next==NULL)
    return NULL;
    while(temp!=NULL)
    {
        temp = temp->next;
        N++;
    }
    int i=1;
    Node* dummy=head;
    while(i<N/2)
    {
        dummy= dummy->next;
        i++;
    }
    dummy->next = dummy->next->next;
    return head;
}
