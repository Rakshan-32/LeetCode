class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> s;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    s.insert(j);
                    s.insert(nums[i]/j);
                }
                if(s.size()>4){
                    break;
                }
            }
            if(s.size()==4){
                for(int x:s){
                    ans+=x;
                }
            }
        }
        return ans;
    }
};