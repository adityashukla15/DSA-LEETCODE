/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-length-of-loop/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of Linked List Node
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

    int findlength(Node* slow, Node* fast) {
        int cnt = 1;
        fast = fast->next;

        while (slow != fast) {
            cnt++;
            fast = fast->next;
        }

        return cnt;
    }

    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return findlength(slow, fast);
            }
        }

        return 0;
    }
};

