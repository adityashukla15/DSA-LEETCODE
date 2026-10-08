class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        // Remove duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();

        // Prefix sum of nums
        vector<long long> prefix(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        // Binary search for the last index
        // where number of missing elements < k
        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long missing = nums[mid] - (mid + 1);

            if (missing < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // high = last index where missing < k

        long long missingBefore = 0;

        if (high >= 0) {
            missingBefore = nums[high] - (high + 1);
        }

        // Sum of all missing numbers before/equal to nums[high]
        long long sumBefore = 0;

        if (high >= 0) {

            // Sum from 1 to nums[high]
            long long total = 1LL * nums[high] * (nums[high] + 1) / 2;

            // Remove numbers that already exist in nums
            sumBefore = total - prefix[high];
        }

        // How many more missing numbers do we need?
        long long remaining = k - missingBefore;

        // These numbers come immediately after nums[high]
        long long start;

        if (high >= 0)
            start = nums[high] + 1;
        else
            start = 1;

        long long end = start + remaining - 1;

        // Sum of remaining consecutive numbers
        long long sumAfter =
            (start + end) * remaining / 2;

        return sumBefore + sumAfter;
    }
};