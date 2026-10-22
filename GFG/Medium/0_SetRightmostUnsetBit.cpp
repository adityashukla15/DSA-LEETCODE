/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBit(int n) {
        // code here
        if(n==0){
            return 1;
        }
        return n |(n+1);
    }
};
