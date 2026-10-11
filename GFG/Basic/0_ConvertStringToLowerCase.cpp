/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/convert-string-to-lowercase/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(int i=0;i<s.size();i++){
              s[i] = tolower(static_cast<unsigned char>(s[i]));
        }
        return s;
    }
};
