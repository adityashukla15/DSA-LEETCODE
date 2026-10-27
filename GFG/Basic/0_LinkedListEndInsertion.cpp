/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
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
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==NULL){
            return new Node(x);
        }
        Node *temp=head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        Node*newNode=new Node(x);
        temp->next=newNode;
        return head;
        
    }
};
