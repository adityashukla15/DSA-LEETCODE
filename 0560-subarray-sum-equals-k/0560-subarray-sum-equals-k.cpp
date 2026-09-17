class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;

        int prefixSum=0;
        int cnt=0;

        mpp[0]=1;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            int remove=prefixSum-k;
             if (mpp.find(remove) != mpp.end()) {
                cnt += mpp[remove];
             }
             mpp[prefixSum]++;
        }
        return cnt;
    }

};