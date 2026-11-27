/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


class myQueue {

    Node* front;
    Node* rear;
    int count;

public:

    myQueue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {

        Node* newNode = new Node(x);

        // If queue is empty
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
    }

    void dequeue() {

        // Underflow condition
        if (isEmpty()) {
            return;
        }

        Node* temp = front;

        front = front->next;

        delete temp;

        count--;

        // If last node is deleted
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    int getFront() {

        if (isEmpty()) {
            return -1;
        }

        return front->data;
    }

    int size() {
        return count;
    }
};

