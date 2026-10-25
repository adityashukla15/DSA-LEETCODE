/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        int x=m^n;
        if(x==0) return -1;
        int pos=1;
        while((x&1)==0){
            x>>=1;
            pos++;
        }
        return pos;
    }
};
