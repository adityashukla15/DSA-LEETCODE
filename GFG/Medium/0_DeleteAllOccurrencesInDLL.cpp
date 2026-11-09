/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/*Structure of the doubly linked list  Node 
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                if(temp==head){
                    head=temp->next;
                }
                Node* nextNode=temp->next;
                Node* prevNode=temp->prev;
                if(nextNode!=NULL) nextNode->prev=prevNode;
                if(prevNode!=NULL)prevNode->next=nextNode;
                free(temp);
                temp=nextNode;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};
