class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int diff[5]={0,-1,0,1,0};
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        int time=-1;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto [r,c]=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int ar=r+diff[i];
                    int ac=c+diff[i+1];
                    if(ar>=0 && ar<row && ac>=0 && ac<col && grid[ar][ac]==1){
                        q.push({ar,ac});
                        grid[ar][ac]=2;
                    }
                }
            }
            time++;
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return max(0,time);
    }
};