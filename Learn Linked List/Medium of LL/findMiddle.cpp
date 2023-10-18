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

Node *findMiddle(Node *head) {
    Node* temp = head;
    int N=0,count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        N++;
    }
    temp = head;
    while(temp!=NULL)
    {
        count++;
        if(count==N/2+1)
        return temp;
        temp = temp->next;
    }
}

