/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/gray-code-1587115620/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binaryToGray(int n) {
        // code here
       return n^(n>>1);
    }
};
