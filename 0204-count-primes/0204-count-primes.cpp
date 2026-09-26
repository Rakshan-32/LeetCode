class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<char> arr(n,1);
        for(int i=3;i<=n/i;i+=2){
            if(arr[i]){
                for(int j=i*i;j<n;j+=2*i){
                    arr[j]=0;
                }
            }
        }
        int ans=1;
        for(int i=3;i<n;i+=2){
            if(arr[i]) ans++;
        }
        return ans;
    }
};