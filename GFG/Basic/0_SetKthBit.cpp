/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        return ((1<<k)|n);
        
    }
};

