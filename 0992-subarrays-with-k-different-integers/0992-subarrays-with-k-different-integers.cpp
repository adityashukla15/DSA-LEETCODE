class Solution {
public:
    int countAtMost(
        vector<int>& nums,
        int limit
    ) {
        // No non-empty subarray
        // can satisfy this limit.
        if (limit <= 0) {
            return 0;
        }
 
        unordered_map<int, int> frequency;
 
        int left = 0;
        int count = 0;
 
        // Expand the window with right.
        for (int right = 0; right < nums.size(); right++) {
            frequency[nums[right]]++;
 
            // Shrink until the window
            // has at most limit values.
            while (frequency.size() > limit) {
                int value = nums[left];
                frequency[value]--;
 
                // Remove the value only
                // after its last copy leaves.
                if (frequency[value] == 0) {
                    frequency.erase(value);
                }
 
                left++;
            }
 
            // Every start from left to right
            // forms a valid subarray.
            count += right - left + 1;
        }
 
        return count;
    }
 
public:
    // Counts subarrays containing
    // exactly k distinct integers.
    int subarraysWithKDistinct(
        vector<int>& nums,
        int k
    ) {
        // Exactly k distinct values
        // require a positive k.
        if (k <= 0) {
            return 0;
        }
 
        return countAtMost(nums, k)
             - countAtMost(nums, k - 1);
    }
};