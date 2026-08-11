class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0],sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                mx=max(mx,sum);
            }
            else break;
        }
        while(true){
            if(find(nums.begin(),nums.end(),mx)==nums.end()) return mx;
            mx++;
        }
        return 0;
    }
};