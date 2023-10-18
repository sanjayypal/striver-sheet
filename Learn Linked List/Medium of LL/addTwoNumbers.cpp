/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
      Node * temp1 = num1;
      Node * temp2 = num2;
      int sum =0,carry=0;
      Node * dummy = new Node(0);
      Node * temp = dummy;
      while(temp1 != NULL || temp2 != NULL || carry!=0)
      {  sum =0;

          if(carry!=0)
          sum+=carry;
          if(temp1!=NULL)
          {
              sum+=temp1->data;
              temp1= temp1->next;
          } 
          if(temp2!=NULL)
          {
              sum+=temp2->data;
              temp2= temp2->next;
          }
          int tempnum = sum%10;
          Node * n = new Node(tempnum);
          temp->next = n;
          temp = temp->next;
          carry = sum/10;
      }
      temp->next =nullptr;
      return dummy->next;
}
