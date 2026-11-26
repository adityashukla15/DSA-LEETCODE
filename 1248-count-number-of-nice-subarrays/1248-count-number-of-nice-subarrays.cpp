class Solution {
public:
    private:
    // Counts odd numbers inside the selected subarray.
    int countAtMost(vector<int>& nums, int limit) {
 
        // A subarray cannot contain a negative number of odd values.
        if (limit < 0) {
            return 0;
        }
 
        int left = 0;
        int oddCount = 0;
        int count = 0;
 
        // Expand the window using each index as the right boundary.
        for (int right = 0; right < nums.size(); right++) {
 
            // Count the new value when it is odd.
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
 
            // Shrink until the window contains at most limit odd values.
            while (oddCount > limit) {
 
                // Remove an odd value from the count when it leaves.
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
 
                left++;
            }
 
            // Every start from left to right forms a valid subarray.
            count += right - left + 1;
        }
 
        return count;
    }
 
public:
    // Counts subarrays containing exactly k odd numbers.
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countAtMost(nums, k)
             - countAtMost(nums, k - 1);
    }

};