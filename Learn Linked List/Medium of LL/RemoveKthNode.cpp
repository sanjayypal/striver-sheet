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

Node* removeKthNode(Node* head, int K)
{
    Node* t=head;
    if(head->next==NULL)
    return NULL;
    int N=0;
    while(t!=NULL)
    {
        t=t->next;
        N++;
    }
    int x = N-K;
    Node* temp=head;
    int count=1;
    if(x==0)
    head = head->next;
    int i=1;
    while(i<x)
    {
       temp=temp->next;
       i++;
    }
    temp->next = temp->next->next;
    return head;
}




// Method 2
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }