class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=1;
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<numbers.size();i++){
            int sum=target-numbers[i];
            if(mp.find(target-sum)!=mp.end()){
                ans[0]=mp[target-sum];
                ans[1]=i+1;
                break;
            }
            mp[sum]=i+1;
        }
        return ans;
    }
};