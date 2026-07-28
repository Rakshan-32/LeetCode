class Solution {
public:
    int find(vector<int>& arr,int x){
        if(arr[x]==x) return x;
        return arr[x]=find(arr,arr[x]);
    }
    void join(vector<int>& arr,int a,int b){
        a=find(arr,a);
        b=find(arr,b);
        if(a!=b){
            arr[b]=a;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]){
                    join(arr,i,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            find(arr,i); 
            if(arr[i]==i) ans++;
        }
        return ans;
    }
};