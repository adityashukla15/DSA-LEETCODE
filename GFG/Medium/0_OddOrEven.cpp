/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/odd-or-even3618/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isEven(int n) {
        // code here
        if((n&1)==0){
            return true;
        }
        else{
            return false;
        }
    }
};
