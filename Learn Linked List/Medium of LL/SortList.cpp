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

Node* sortList(Node* head){
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    sort(arr.begin(),arr.end());
    temp = head;
    int i=0;
    while(temp!=NULL)
    {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }
    return head;
}
