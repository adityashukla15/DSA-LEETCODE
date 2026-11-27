/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1
 * Platform     : GFG
 * Difficulty   : Basic
 */


#include <bits/stdc++.h>
using namespace std;

class myStack {

private:
    vector<int> arr;
    int capacity;
    int topIndex;

public:

    // Constructor
    myStack(int n) {
        capacity = n;
        arr.resize(capacity);
        topIndex = -1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Check if stack is full
    bool isFull() {
        return topIndex == capacity - 1;
    }

    // Insert element into stack
    void push(int x) {
        if (isFull()) {
            return;
        }

        arr[++topIndex] = x;
    }

    // Remove top element
    void pop() {
        if (isEmpty()) {
            return;
        }

        topIndex--;
    }

    // Return top element
    int peek() {
        if (isEmpty()) {
            return -1;
        }

        return arr[topIndex];
    }
};

