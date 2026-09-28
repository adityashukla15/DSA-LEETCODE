class Solution {
public:
    bool canwePlace(vector<int>&basket,int dist,int balls){
        int  cntBalls=1,last=basket[0];
        for(int i=1;i<basket.size();i++){
            if(basket[i]-last>=dist){
                cntBalls++;
                last=basket[i];
            }
            if(cntBalls>=balls) return true;

        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();

        int low=1,high=position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(canwePlace(position,mid,m)==true){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};