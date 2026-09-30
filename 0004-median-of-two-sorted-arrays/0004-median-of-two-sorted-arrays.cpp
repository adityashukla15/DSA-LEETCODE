class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        // Binary search hamesha smaller array par
        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);

        int low = 0, high = n1;

        // Number of elements required on left side
        int left = (n1 + n2 + 1) / 2;

        int n = n1 + n2;

        while (low <= high) {

            // Partition in nums1
            int mid1 = (low + high) >> 1;

            // Partition in nums2
            int mid2 = left - mid1;

            // Boundary values
            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;

            if (mid1 < n1)
                r1 = nums1[mid1];

            if (mid2 < n2)
                r2 = nums2[mid2];

            if (mid1 - 1 >= 0)
                l1 = nums1[mid1 - 1];

            if (mid2 - 1 >= 0)
                l2 = nums2[mid2 - 1];

            // Correct partition
            if (l1 <= r2 && l2 <= r1) {

                // Total length is odd
                if (n % 2 == 1)
                    return max(l1, l2);

                // Total length is even
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }

            // We have taken too many elements from nums1
            else if (l1 > r2) {
                high = mid1 - 1;
            }

            // We need to take more elements from nums1
            else {
                low = mid1 + 1;
            }
        }

        return 0.0;
    }
};