/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeVowels(string& s) {
        // code here
       regex r("[aeiouAEIOU]");
       return regex_replace(s,r,"");
    }
};
