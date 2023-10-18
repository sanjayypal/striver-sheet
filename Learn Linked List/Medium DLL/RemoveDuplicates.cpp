/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *removeDuplicates(Node *head) {
    Node *cur = head;
    while(cur){
        if((cur->next != NULL)&&(cur->data == cur->next->data)){
            // storing the the node that have to remove
            Node *remove = cur->next; 
            // changing the next pointer
            cur->next = cur->next->next;
            // previous pointer change with consern of last node.
            if (cur->next) {
                cur->next->prev = cur;
            }
            delete remove;

        }else{
            cur = cur->next;
        }
    }

    return head;
}

