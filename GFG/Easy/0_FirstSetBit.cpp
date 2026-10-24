/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getFirstSetBit(int n) {
        if (n == 0) return 0;

        int bit = n & -n;
        int pos = 1;

        while (bit > 1) {
            bit >>= 1;
            pos++;
        }

        return pos;
    }
};
