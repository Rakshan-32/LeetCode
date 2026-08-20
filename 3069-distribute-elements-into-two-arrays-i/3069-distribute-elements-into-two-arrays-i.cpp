class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int i=2,n=nums.size();
        vector<int> arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        while(i<n){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
            i++;
        }
        for(int j=0;j<arr2.size();j++){
            arr1.push_back(arr2[j]);
        }
        return arr1;
    }
};