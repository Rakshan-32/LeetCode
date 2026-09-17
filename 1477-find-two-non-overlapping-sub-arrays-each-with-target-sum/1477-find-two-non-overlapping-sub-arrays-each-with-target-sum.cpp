class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int> res(n,INT_MAX);
        int sum=0,j=0,ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>target){
                sum-=arr[j];
                j++;
            }
            if(sum==target){
                int len=i-j+1;
                if(j>0 && res[j-1]!=INT_MAX){
                    ans=min(ans,len+res[j-1]);
                }
                res[i]=len;
            }
            if(i>0){
                res[i]=min(res[i],res[i-1]);
            }
        }
        return (ans==INT_MAX? -1:ans);
    }
};