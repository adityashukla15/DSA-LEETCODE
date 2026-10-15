class Solution {
public:
    void func(int i, vector<int>& nums, int n,
              vector<int>& current, vector<vector<int>>& ans) {

        if (i == n) {
            ans.push_back(current);
            return;
        }

        // Include nums[i]
        current.push_back(nums[i]);
        func(i + 1, nums, n, current, ans);

        // Backtrack: remove nums[i]
        current.pop_back();

        // Exclude nums[i]
        func(i + 1, nums, n, current, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;
        vector<int> current;

        func(0, nums, n, current, ans);

        return ans;
    }
};