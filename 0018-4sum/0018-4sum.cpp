class Solution {
public:
    vector<vector<int>>fourSum(vector<int>&a,int target){
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        if (i>0 && a[i]==a[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && a[j]==a[j-1])continue;

            int left=j+1,right=n-1;
            while(left<right){
                long long sum=(long long)a[i]+a[j]+a[left]+a[right];
                if(sum==target){
                    ans.push_back({a[i],a[j],a[left],a[right]});
                    while (left < right && a[left] == a[left + 1])
                            left++;
                        // Move right pointer skipping duplicates
                        while (left < right && a[right] == a[right - 1])
                            right--;

                 left++;
                 right--;
                }
                else if (sum < target) left++;
                    else right--;
            }
        }
    }
    return ans;
}
};