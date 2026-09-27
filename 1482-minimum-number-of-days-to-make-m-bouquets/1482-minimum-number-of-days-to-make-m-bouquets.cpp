class Solution {
public:

bool possible(vector<int>&arr,int day,int m,int k){
    int cnt=0;
    int nofB=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=day){
            cnt++;
        }
        else {
            nofB += cnt / k;
            cnt=0;
        }
    
    }
    nofB += cnt / k;
    return nofB>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m * 1LL * k * 1LL;
        int n=bloomDay.size();
        if(val>n) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if (possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};