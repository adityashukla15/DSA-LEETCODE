/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/size-of-doubly-linked-list--114556/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*
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
};
*/
class Solution {
  public:
    int findSize(Node *head) {
        // Code Here
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
};
