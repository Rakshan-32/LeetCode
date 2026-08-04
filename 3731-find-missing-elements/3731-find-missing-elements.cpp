class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int> res(nums.begin(),nums.end());
        vector<int> ans;
        int x=nums[0];
        for(int i=x+1;i<nums[nums.size()-1];i++){
            if(!res.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};