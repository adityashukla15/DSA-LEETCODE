/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/display-longest-name0853/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int n=arr.size();
        string longeststr=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i].length()>longeststr.length()){
                longeststr=arr[i];
            }
        }
        
        return longeststr;
    }
};

