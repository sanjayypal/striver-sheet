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
#include<bits/stdc++.h>
Node* recursive_reverse2(Node * cur, Node * t)
 {
     if(cur == nullptr)
     return t;
     Node * nxtnode = cur->next;
     cur->next =t;
     return (recursive_reverse2(nxtnode, cur));

 }


Node *addOne(Node *head)
 {
    Node * temp = head;
    temp = recursive_reverse2(temp,nullptr);

    Node * temp2 = temp;
    while(temp2!= nullptr)
    {
     if (temp2->data != 9) {
       temp2->data++;
       break;
     }
     else if(temp2->data==9 && temp2->next == nullptr)
     {
         temp2->data=0;
         Node * dummy = new Node();
         dummy->data =1;
         temp2->next = dummy;
         dummy->next = nullptr;
         break;
     }
     else if(temp2->data ==9)
     {
         temp2->data =0;
         temp2 = temp2->next;
     }

    }
    temp = recursive_reverse2(temp, nullptr);
    return temp;
 }
