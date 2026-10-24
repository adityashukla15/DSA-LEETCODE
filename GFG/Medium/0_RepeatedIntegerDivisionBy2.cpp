/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int mthHalf(int n, int m) {
        // code here
        return n>>(m-1);
    }
};
