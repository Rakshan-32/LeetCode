class Solution {
public:
    int diff[5]={-1,0,1,0,-1};
    void dfs(vector<vector<int>>& image,int sr,int sc,int val,int clr,int r,int c){
        if(sr>=r || sr<0 || sc>=c || sc<0 || image[sr][sc]!=val) return;
        image[sr][sc]=clr;
        for(int i=0;i<4;i++){
            int ar=sr+diff[i];
            int ac=sc+diff[i+1];
            dfs(image,ar,ac,val,clr,r,c);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r=image.size();
        int c=image[0].size();
        int val=image[sr][sc];
        if(val==color) return image;
        dfs(image,sr,sc,val,color,r,c);
        return image;
    }
};