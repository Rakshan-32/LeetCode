class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int x=nums[i],y=0;
            while(x>0){
                y+=x%10;
                x/=10;
            }
            v.push_back({y,nums[i]});
        }
        sort(v.begin(),v.end());
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=v[i].second;
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=arr[i]){
                int j=mp[arr[i]];
                swap(nums[i],nums[j]);
                mp[nums[j]]=j;
                mp[nums[i]]=i;
                ans++;
            }
        }
        return ans;
    }
};