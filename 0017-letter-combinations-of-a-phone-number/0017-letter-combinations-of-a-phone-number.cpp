class Solution {
public:
    void solve(int idx, string& digits, string& ds,
               vector<string>& ans, vector<string>& mp) {

        // Base case
        if (idx == digits.size()) {
            ans.push_back(ds);
            return;
        }

        // Current digit
        int digit = digits[idx] - '0';

        // Try every letter mapped to this digit
        for (char ch : mp[digit]) {

            ds.push_back(ch);

            solve(idx + 1, digits, ds, ans, mp);

            ds.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.empty()) {
            return ans;
        }

        vector<string> mp = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        string ds = "";

        solve(0, digits, ds, ans, mp);

        return ans;
    }
};