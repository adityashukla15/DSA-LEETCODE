/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int val=(1<<k);
        if((n&val)!=0){
            return true;
        }
        return false;
    }
};
