/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/replace-the-bit3212/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int replaceBit(int n, int k) {
        // code here
       int len=0;
       int temp=n;
       while(temp>0){
           len++;
           temp>>=1;
       }
       if (k>len){
           return n;
       }
       int shift=len-k;
       
       return n & ~(1<<shift);
    }
};
