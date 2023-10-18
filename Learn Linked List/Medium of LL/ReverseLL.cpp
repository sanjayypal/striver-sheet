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
// Iterative Approach
Node* reverseLinkedList(Node *head)
{
    Node* prev_p=NULL;
    Node* curr_p=head;
    Node* next_p;
    while(curr_p)
    {
        next_p = curr_p->next;
        curr_p->next=prev_p;

        prev_p=curr_p;
        curr_p=next_p;
    }
    head = prev_p;
    return head;
}

// Recursive Apporoach
Node* reverseLinkedList(Node *head)
{
   if(head==NULL || head->next==NULL)
   return head;
   Node* newHead = reverseLinkedList(head->next);
   Node* headNext = head->next;
   headNext->next=head;
   head->next = NULL;
   return newHead;
}
