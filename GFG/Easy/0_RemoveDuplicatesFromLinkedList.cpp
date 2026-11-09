/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of linked list Node
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
public:
    Node* removeDuplicates(Node* head) {

        if (head == NULL) return NULL;

        unordered_set<int> seen;

        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL) {

            if (seen.find(curr->data) != seen.end()) {

                prev->next = curr->next;
                curr = prev->next;

            }
            else {

                seen.insert(curr->data);

                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};
