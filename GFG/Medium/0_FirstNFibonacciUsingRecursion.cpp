/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  int findFibonacci(int n){
       if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            return findFibonacci(n-2)+findFibonacci(n-1);
        }
  }
    vector<int> fibonacciNumbers(int n) {
        // code here
       vector<int>ans;
       for(int i=0;i<n;i++){
           ans.push_back(findFibonacci(i));
       }
       return ans;
    }
};
