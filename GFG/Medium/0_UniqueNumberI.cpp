/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-unique-number/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int n=arr.size();
        int res=0;
        for (int i = 0; i < n; i++) {
               res = res ^ arr[i];
           }
        return res;
    }
};
