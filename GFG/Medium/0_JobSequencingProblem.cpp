/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {

        int n = deadline.size();

        vector<pair<int,int>> jobs;

        for(int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }

        // Sort jobs by profit in descending order
        sort(jobs.rbegin(), jobs.rend());

        // Find maximum deadline
        int maxDeadline = *max_element(deadline.begin(), deadline.end());

        // DSU initialization
        vector<int> parent(maxDeadline + 1);

        for(int i = 0; i <= maxDeadline; i++) {
            parent[i] = i;
        }

        // Find function with path compression
        function<int(int)> find = [&](int x) {
            if(parent[x] == x)
                return x;

            return parent[x] = find(parent[x]);
        };

        int count = 0;
        int totalProfit = 0;

        for(auto &job : jobs) {

            int prof = job.first;
            int dead = job.second;

            // Find latest available slot
            int slot = find(dead);

            if(slot > 0) {
                count++;
                totalProfit += prof;

                // Mark this slot as occupied
                parent[slot] = find(slot - 1);
            }
        }

        return {count, totalProfit};
    }
};

