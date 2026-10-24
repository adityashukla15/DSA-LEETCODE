/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/set-bits0143/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBits(int n) {
        // Code here
        int cnt=0;
        while(n>0){
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
};
