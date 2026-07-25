class Solution {
public:
    int countElements(vector<int>& nums) {
        int min=*min_element(nums.begin(), nums.end());
        int max=*max_element(nums.begin(), nums.end());
        int c=0;
        for(int x:nums)
            if(x>min && x<max)
                c++;
        return c;
    }
};