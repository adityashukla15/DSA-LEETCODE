/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-n-to-1-without-loop/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNos(int n) {
        // code here
        if(n==0){
            return;
        }
        
        cout<<n<<" ";
        printNos(n-1);
    }
};
