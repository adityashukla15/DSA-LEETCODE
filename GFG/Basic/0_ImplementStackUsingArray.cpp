/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1
 * Platform     : GFG
 * Difficulty   : Basic
 */


#include <bits/stdc++.h>
using namespace std;

class myStack {

private:
    unique_ptr<int[]> arr;
    int capacity;
    int topIndex;

public:

    myStack(int n) {
        if (n <= 0) {
            throw invalid_argument("Capacity must be positive");
        }

        capacity = n;
        arr = make_unique<int[]>(capacity);
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == capacity - 1;
    }

    void push(int x) {
        if (isFull()) {
            return;
        }

        arr[++topIndex] = x;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }

        topIndex--;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }

        return arr[topIndex];
    }
};

