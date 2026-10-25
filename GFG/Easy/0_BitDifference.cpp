/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int x=a^b;
        int count=0;
        while(x>0){
            x=x&(x-1);
            count++;
        }
        return count;
    }
};
