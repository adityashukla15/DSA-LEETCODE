/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/fibonacci-using-recursion/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n<=1){
            return n;
    }
    return nthFibonacci(n-1) + nthFibonacci(n-2);
    }
};
