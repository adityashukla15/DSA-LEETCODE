/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
private:
    int addOneRecursive(Node* node) {

        // Base case
        if (node == nullptr) {
            return 1;
        }

        // Recursively reach the last node
        int carry = addOneRecursive(node->next);

        // If no carry, no need to update
        if (carry == 0) {
            return 0;
        }

        // Add carry to current digit
        int sum = node->data + carry;

        node->data = sum % 10;

        return sum / 10;
    }

public:
    Node* addOne(Node* head) {

        int carry = addOneRecursive(head);

        // If carry remains, create a new head
        if (carry > 0) {
            Node* newHead = new Node(carry);
            newHead->next = head;
            head = newHead;
        }

        return head;
    }
};
