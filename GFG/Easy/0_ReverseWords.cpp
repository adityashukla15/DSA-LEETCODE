/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;



    
    class Solution {
    public:
        string reverseWords(string &s) {
            vector<string> words;
            string word;

            stringstream ss(s);

            while (getline(ss, word, '.')) {
                if (!word.empty()) {
                    words.push_back(word);
                }
            }

            reverse(words.begin(), words.end());

            string ans = "";

            for (int i = 0; i < words.size(); i++) {
                if (i > 0) {
                    ans += ".";
                }
                ans += words[i];
            }

            return ans;
        }
    };


