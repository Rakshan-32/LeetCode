class Trie{
public:
    string wd;
    Trie* chars[26]={};
};

class Solution {

vector<string> ans;
int rdiff[4]={-1,0,1,0};
int cdiff[4]={0,1,0,-1};

public:
    void buildTrie(Trie* p,string wd,int idx){
        if(idx==wd.size()){
            p->wd=wd;
            return;
        }
        int x=wd[idx]-'a';
        if(p->chars[x]==nullptr){
            p->chars[x]=new Trie();
        }
        buildTrie(p->chars[x],wd,idx+1);
    }

    void dfs(int row,int col,int r,int c,vector<vector<char>>& board, vector<vector<bool>>& vis, Trie* t){
        int chldx=board[row][col]-'a';
        if(t->chars[chldx]==nullptr) return;
        Trie* cur=t->chars[chldx];
        if(cur->wd!=""){
            ans.push_back(cur->wd);
            cur->wd="";
        }
        vis[row][col]=true;
        for(int i=0;i<4;i++){
            int ar=row+rdiff[i];
            int ac=col+cdiff[i];
            if(ar>=0 && ac>=0 && ar<r && ac<c && !vis[ar][ac]){
                dfs(ar,ac,r,c,board,vis,cur);
            }
        }
        vis[row][col]=false;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* root=new Trie();
        for(string &wd:words){
            buildTrie(root,wd,0);
        }
        int r=board.size();
        int c=board[0].size();
        vector<vector<bool>> vis(r,vector<bool>(c,false));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                dfs(i,j,r,c,board,vis,root);
            }
        }
        return ans;
    }
};