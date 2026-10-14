/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/josephus-problem/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    int josephus(int n, int k){
        if (n == 1)
            return 1;
        else

            // The position returned by josephus(n - 1, k)
            // is adjusted because the recursive call
            // josephus(n - 1, k) considers the
            // original position k % n + 1 as position 1
            return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};
