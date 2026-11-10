/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        Node* temp=headRef;
        while(temp!=NULL && temp->next!=NULL){
            Node* nextNode=temp->next;
            while(nextNode!=NULL && nextNode->data==temp->data){
                Node* duplicate=nextNode;
                nextNode=nextNode->next;
                free(duplicate);
            }
            temp->next=nextNode;
            if(nextNode!=NULL)nextNode->prev=temp;
            temp=temp->next;
        }
        return headRef;
    }
};
