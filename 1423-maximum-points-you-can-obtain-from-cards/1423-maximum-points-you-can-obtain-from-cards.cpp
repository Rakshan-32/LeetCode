class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size(),lsum=0,rsum=0,ans=0;
        for(int i=0;i<k;i++){
            lsum+=nums[i];
        }
        ans=lsum;
        int x=nums.size()-1;
        for(int i=k-1;i>=0;i--){
            rsum+=nums[x];
            lsum-=nums[i];
            x--;
            ans=max(ans,lsum+rsum);
        }
        return ans;
    }
};