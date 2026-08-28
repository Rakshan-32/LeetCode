class Solution {
public:
    int passThePillow(int n, int time) {
        vector<int> arr(n);
        for(int i=0;i<n;i++) arr[i]=i+1;
        bool forw=true,rev=false;
        int i=0;
        while(time--){
            if(forw) i++;
            else i--;
            if(i==n-1){
                rev=true;
                forw=false;
            }
            if(i==0){
                forw=true;
                rev=false;
            }
        }
        return arr[i];
    }
};