/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/for-loop-2/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

void utility(string s) {
    // length of string is given by s.length()
    // character at any index i is given by s[i]

    // Write your code here
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
    
}
