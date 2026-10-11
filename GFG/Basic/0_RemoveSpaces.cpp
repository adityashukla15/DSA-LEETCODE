/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-spaces0128/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeSpaces(string& s) {
        int n = s.length();
        int i = 0, itr = 0;

        while (i < n) {
            if (s[i] != ' ') {
                s[itr++] = s[i];
            }
            i++;
        }

        return s.substr(0, itr);
    }
};
