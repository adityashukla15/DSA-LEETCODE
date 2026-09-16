class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n=nums.size();
      long long sum=0;
      long long maximum=LLONG_MIN;
      for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maximum){
            maximum=sum;
        }
        if(sum<0){
            sum=0;
        }
      }
      return maximum;
    }
};