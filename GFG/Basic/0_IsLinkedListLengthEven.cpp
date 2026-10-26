/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        // code here
        int cnt=0;
        Node*temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            cnt++;
        }
        if(cnt%2==0){
            return true;
        }
        return false;
    }
};
