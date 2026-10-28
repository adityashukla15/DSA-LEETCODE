/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/display-doubly-linked-list--154650/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        // code here
        vector<int> forward, backward;

                Node* curr = head;

                // Forward traversal
                while (curr != nullptr) {
                    forward.push_back(curr->data);
                    curr = curr->next;
                }

                // Find tail by traversing forward
                curr = head;
                while (curr != nullptr && curr->next != nullptr) {
                    curr = curr->next;
                }

                // Backward traversal from tail
                while (curr != nullptr) {
                    backward.push_back(curr->data);
                    curr = curr->prev; // Use curr->back if that is your field name
                }

                return {forward, backward};
    }
};
