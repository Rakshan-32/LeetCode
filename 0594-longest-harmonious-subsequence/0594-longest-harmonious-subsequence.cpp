class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,j=0;
        for(int i=0;i<n;i++){
            while(j<i && abs(nums[i]-nums[j])>1){
                j++;
            }
            if(nums[i]-nums[j]==1){
                ans=max(ans,i-j+1);
            }
        }
        return ans;
    }
};