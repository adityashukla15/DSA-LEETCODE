/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countDigits(int n) {
        // Code here
        if(n==0){
            return 1;
        }
        int count=0;
        while(n!=0){
            n=n/10;
            ++count;
        }
        return count;
        
    }
};
