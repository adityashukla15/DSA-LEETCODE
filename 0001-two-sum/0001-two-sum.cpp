class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++){
            int n=nums.size();
            int required=target-nums[i];
            if(mpp.find(required)!=mpp.end()){
                return {mpp[required],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }

};