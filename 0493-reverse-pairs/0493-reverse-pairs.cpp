class Solution {
public:
    int ans=0;
    void merge(vector<int>& nums,int l,int m,int h){
        vector<int> arr;
        int i=l,j=m+1;
        while(i<=m && j<=h){
            if((long long)nums[i]>2*1LL*nums[j]){
                ans+=m-i+1;
                j++;
            }
            else i++;
        }
        i=l,j=m+1;
        while(i<=m && j<=h){
            if(nums[i]<=nums[j]){
                arr.push_back(nums[i]);
                i++;
            }
            else{
                arr.push_back(nums[j]);
                j++;
            }
        }
        while(i<=m){
            arr.push_back(nums[i]);
            i++;
        }
        while(j<=h){
            arr.push_back(nums[j]);
            j++;
        }
        for(int i=l;i<=h;i++){
            nums[i]=arr[i-l];
        }
    }
    void ms(vector<int>& nums,int l,int h){
        if(l>=h) return;
        int m=(l+h)/2;
        ms(nums,l,m);
        ms(nums,m+1,h);
        merge(nums,l,m,h);
    }
    int reversePairs(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
        return ans;
    }
};