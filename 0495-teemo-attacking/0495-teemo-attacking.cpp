class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int n=timeSeries.size();
        for(int i=0;i<n;++i){
            if(i!=n-1){
                if(timeSeries[i+1]-timeSeries[i]>=duration) ans+=duration;
                else ans+=timeSeries[i+1]-timeSeries[i];
            }
            else ans+=duration;
        }
        return ans;
    }
};