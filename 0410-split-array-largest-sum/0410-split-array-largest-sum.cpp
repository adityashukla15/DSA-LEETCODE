class Solution {
public:

 bool isPossible(vector<int>&arr,int k,int mid){
   int numCount=1;
   int m=0;
   for(int i=0;i<arr.size();i++){
    if(m+arr[i]<=mid){
        m+=arr[i];
    }
    else{
        numCount++;
        m=arr[i];
    }
   }
   return numCount<=k;
 }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int num :nums){
            high+=num;
        }
        int answer=-1;
        while(low<=high){
          int mid=(low+high)/2;
          if(isPossible(nums,k,mid)){
            answer=mid;
            high=mid-1;
          }
          else{
            low=mid+1;
          }
        }
        return answer;
    }
};