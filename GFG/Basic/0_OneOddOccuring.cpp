/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
      int ans=0;
      for(int i=0;i<arr.size();i++){
          ans=ans^arr[i];
    }
    return ans;
    }
};
