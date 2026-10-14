/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/subset-sums2234/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
     
     void solve(int idx, int sum, vector<int>& arr,
                   vector<int>& ans) {
            if (idx == arr.size()) {
                ans.push_back(sum);
                return;
            }

            // Pick current element
            solve(idx + 1, sum + arr[idx], arr, ans);

            // Not pick current element
            solve(idx + 1, sum, arr, ans);
        }

        vector<int> subsetSums(vector<int>& arr) {
            vector<int> ans;
            solve(0, 0, arr, ans);
            return ans;
        }
};
