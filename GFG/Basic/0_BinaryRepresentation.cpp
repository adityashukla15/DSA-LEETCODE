/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/binary-representation5003/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string getBinaryRep(int n) {
        string ans = "";

        for (int i = 31; i >= 0; i--) {
            if ((n >> i) & 1) {
                ans += '1';
            } else {
                ans += '0';
            }
        }

        return ans;
    }
};

