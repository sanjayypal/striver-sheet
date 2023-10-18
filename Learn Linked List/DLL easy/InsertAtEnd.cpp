/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    if(head==NULL)
    {
        Node* n1 = new Node(k);
        head = n1;
        return head;
    }
    Node* temp=new Node(k);
    temp->next=NULL;
    Node* temp1=head;
    while(temp1->next!=NULL)
      temp1=temp1->next;
    temp1->next=temp;
    temp->prev = temp1;
    return head;
}
