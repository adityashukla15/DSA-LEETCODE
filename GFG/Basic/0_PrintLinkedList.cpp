/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
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

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        vector<int>ans;
        Node*temp=head;
        while(temp!=nullptr){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        return ans;
    }
};
