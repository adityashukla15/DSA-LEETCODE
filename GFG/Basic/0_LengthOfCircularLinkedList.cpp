/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/length-of-circular-linked-list/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Linked List Node Structure
class Node {
    public:
        int data;
        Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int getLength(Node *head) {
        // code here
        if(head==NULL){
            return 0;
        }
        int count=0;
        Node* temp=head;
        do{
            count++;
            temp=temp->next;
        }
        while (temp!=head);
        
        return count;
    }
};
