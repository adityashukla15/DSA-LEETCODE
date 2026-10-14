/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if (n==1){
            return 1;
        }
        int first=towerOfHanoi(n-1,from,aux,to);
        int second=1;
        int third=towerOfHanoi(n-1,aux,to,from);
        return first+second+third;
    }
};
