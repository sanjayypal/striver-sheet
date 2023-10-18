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
bool isPalindrome(Node *head)
{
    Node* temp = head;
    vector<int> arr;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int start = 0,end = arr.size()-1;
    while(start<=end)
    {
        if(arr[start]==arr[end])
        {
            start++; end--;
        }
        else
        return false;
    }
    return true;
}



// Apporoach 2
Node* reverse(Node* ptr) {
    Node* pre=NULL;
    Node* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}

bool isPalindrome(Node *head)
{
 if(head==NULL||head->next==NULL) return true;
        
    Node* slow = head;
    Node* fast = head;
        
    while(fast->next!=NULL  &&  fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    Node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}