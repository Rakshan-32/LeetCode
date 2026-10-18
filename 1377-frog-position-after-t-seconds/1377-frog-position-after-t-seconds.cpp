class Solution {
public:
    double dfs(int node,int p,int ct,int t,int target,vector<vector<int>>& adj,double prob){
        int cnt=0;
        for(int x:adj[node]){
            if(x!=p) cnt++;
        }
        if(node==target){
            if(ct==t || cnt==0) return prob;
            return 0.0;
        }
        if(ct==t || cnt==0) return 0.0;
        for(int x:adj[node]){
            if(x!=p){
                double ans=dfs(x,node,ct+1,t,target,adj,prob/cnt);
                if(ans>0) return ans;
            }
        }
        return 0.0;
    }
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> adj(n+1);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        return dfs(1,0,0,t,target,adj,1.0);
    }
};