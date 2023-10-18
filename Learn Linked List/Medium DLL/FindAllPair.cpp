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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/
#include<bits/stdc++.h>
vector<pair<int, int>> findPairs(Node *head, int k) {
  Node* start=head;

    Node* end=head;

    vector<pair<int, int>> ans;

    while(end->next!=nullptr){

        end=end->next;

    }

 

    while(start->data< end->data){

        int val =start->data + end->data;

        if(val ==k){

            ans.push_back({start->data,end->data});

            start=start->next;

            end=end->prev;

        }

        else if(val>k){

            end=end->prev;

        }

        else{

            start=start->next;

        }

    }

    return ans;
}
