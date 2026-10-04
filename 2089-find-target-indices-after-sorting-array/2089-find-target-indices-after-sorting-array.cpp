class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
         vector<int> answer;

        if (ans == -1)
            return answer;

        // Add all target indices
        while (ans < nums.size() && nums[ans] == target) {
            answer.push_back(ans);
            ans++;
        }

        return answer;
    }
};