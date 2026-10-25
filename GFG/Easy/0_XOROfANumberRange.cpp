/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
    int prefixXOR(int n) {
        if (n < 0) return 0;

        if (n % 4 == 0) return n;
        if (n % 4 == 1) return 1;
        if (n % 4 == 2) return n + 1;

        return 0;
    }

public:
    int findXOR(int l, int r) {
        return prefixXOR(r) ^ prefixXOR(l - 1);
    }
};

