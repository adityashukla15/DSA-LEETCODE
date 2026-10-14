/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int reverseNum(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
        return rev;
    }
    int power(int n,int rev){
        if(rev==0){
            return 1;
        }
        return n*power(n,rev-1);
    }
    int reverseExponentiation(int n) {
        // code here
        int rev=reverseNum(n);
        return power(n,rev);
    }
};
