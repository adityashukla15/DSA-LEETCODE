/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-pattern3549/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  void solve(int val,vector<int>&res){
      res.push_back(val);
      if(val<=0){
          return ;
      }
      solve(val-5,res);
      res.push_back(val);
  }
    vector<int> pattern(int n) {
        // code here
        vector<int>res;
        solve(n,res);
        return res;
    }
};
