/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
 * Platform     : GFG
 * Difficulty   : Basic
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
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int cnt=0;
        Node*temp=head;
        while(temp!=nullptr){
        temp=temp->next;
        cnt++;
        }
        return cnt;
    }
};
