class Solution {
public:
    int countAtMost(vector<int>& nums, int limit) {
 
        // A binary subarray cannot have a negative sum.
        if (limit < 0) {
            return 0;
        }
 
        int left = 0;
        int currentSum = 0;
        int count = 0;
 
        // Expand the window using each index as the right boundary.
        for (int right = 0; right < nums.size(); right++) {
            currentSum += nums[right];
 
            // Shrink until the window sum becomes valid again.
            while (currentSum > limit) {
                currentSum -= nums[left];
                left++;
            }
 
            // Every start from left to right forms a valid subarray.
            count += right - left + 1;
        }
 
        return count;
    }
 
public:
    // Counts subarrays whose sum is exactly equal to goal.
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countAtMost(nums, goal)
             - countAtMost(nums, goal - 1);
    }
};
 