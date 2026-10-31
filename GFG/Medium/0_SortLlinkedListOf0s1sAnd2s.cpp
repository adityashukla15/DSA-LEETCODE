/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/* Node is defined as
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
public:
    Node* segregate(Node* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        Node zeroDummy(0);
        Node oneDummy(0);
        Node twoDummy(0);

        Node* zeroTail = &zeroDummy;
        Node* oneTail = &oneDummy;
        Node* twoTail = &twoDummy;

        Node* current = head;

        while (current != nullptr) {

            Node* nextNode = current->next;
            current->next = nullptr;

            if (current->data == 0) {
                zeroTail->next = current;
                zeroTail = current;
            }
            else if (current->data == 1) {
                oneTail->next = current;
                oneTail = current;
            }
            else {
                twoTail->next = current;
                twoTail = current;
            }

            current = nextNode;
        }

        zeroTail->next = (oneDummy.next != nullptr)
                         ? oneDummy.next : twoDummy.next;

        oneTail->next = twoDummy.next;

        if (zeroDummy.next != nullptr) {
            return zeroDummy.next;
        }

        if (oneDummy.next != nullptr) {
            return oneDummy.next;
        }

        return twoDummy.next;
    }
};

