class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr=nums;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            auto lb=lower_bound(nums.begin(),nums.end(),arr[i]);
            arr[i]=lb-nums.begin();
        }
        return arr;
    }
};