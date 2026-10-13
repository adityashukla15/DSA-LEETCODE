/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/power-using-recursion/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(
        p==0){
            return 1;
        }
        return n* recursivePower(n,p-1);
        
    }
};

