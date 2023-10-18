/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    vector<int> arr_even;
    vector<int> arr_odd;
    Node* temp = head;
    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        arr_even.push_back(temp->data);
        else
        arr_odd.push_back(temp->data);
        temp=temp->next;
    }
    vector<int> arr;
    for(int i=0; i<arr_even.size(); i++)
    arr.push_back(arr_even[i]);
    for(int i=0; i<arr_odd.size(); i++)
    arr.push_back(arr_odd[i]);
    int i=0;
    Node* t=head;
    while(t!=NULL)
    {
        t->data=arr[i];
        t=t->next;
        i++;
    }
    return head;
}
