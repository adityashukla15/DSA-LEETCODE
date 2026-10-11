/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-for-binary/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        for(int i=0;i<s.size();i++){
            if(s[i]!='0' && s[i]!='1'){
                return false;
            }
            
        }
        return true;
    }
};
