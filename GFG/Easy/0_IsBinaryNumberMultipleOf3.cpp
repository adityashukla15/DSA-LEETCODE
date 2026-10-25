/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isMultipleOf3(string& s) {
        // code here
        int rem = 0;

                for (char bit : s) {
                    rem = (rem * 2 + (bit - '0')) % 3;
                }

                return rem == 0;
    }
};
