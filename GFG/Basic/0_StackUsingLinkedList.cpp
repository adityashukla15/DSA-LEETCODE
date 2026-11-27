/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class myStack {
    struct Node {
            int data;
            Node* next;

            Node(int x) {
                data = x;
                next = NULL;
            }
        };

        Node* top;
        int count;

  public:
    myStack() {
        // Initialize your data members
        top=NULL;
        count=0;
    }

    bool isEmpty() {
        // check if the stack is empty
        return top==NULL;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newNode=new Node(x);
        newNode->next=top;
        top=newNode;
        count++;
    }

    void pop() {
        // Removes the top element of the stack
        if(isEmpty()){
            return;
        }
        Node*temp=top;
        top=top->next;
        delete temp;
        count--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(isEmpty()){
            return -1;
        }
        return top->data;
        
    }

    int size() {
        // Returns the current size of the stack
        return count;
    }
};
