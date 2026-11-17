/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/shortest-job-first/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int solve(vector<int>& bt) {
        sort(bt.begin(), bt.end());

        int n = bt.size();
        int t = 0, wt = 0;

        for(int i = 0; i < n; i++) {
            wt += t;
            t += bt[i];
        }

        return wt / n;
    }
};

