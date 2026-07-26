class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return 0;
    }
};