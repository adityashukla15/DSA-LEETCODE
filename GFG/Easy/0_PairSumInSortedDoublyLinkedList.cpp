/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
public:

    Node* findTail(Node* head) {
        Node* tail = head;

        while (tail != NULL && tail->next != NULL) {
            tail = tail->next;
        }

        return tail;
    }

    vector<vector<int>> givenSumPairs(Node* head, int target) {

        vector<vector<int>> ans;

        if (head == NULL) return ans;

        Node* left = head;
        Node* right = findTail(head);

        while (left != right && left->prev != right) {

            int sum = left->data + right->data;

            if (sum == target) {

                ans.push_back({left->data, right->data});

                left = left->next;
                right = right->prev;
            }
            else if (sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }

        return ans;
    }
};

