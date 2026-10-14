/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isLucky(int n) {
        // code here
        return check(n,2);
    }
    bool check(int n,int counter){
        if(counter>n){
            return true;
        }
        if(n%counter==0){
            return false;
        }
        return check(n-n/counter,counter+1);
    }
};
