/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarySubstring(string& s) {
         int ones=0;
         for(int i=0;i<s.size();i++){
             if(s[i]=='1'){
                 ones++;
             }
         }
         return (ones*(ones-1))/2;
        
    }
};
