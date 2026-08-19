class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        long long ans=0;
        unordered_map<int,vector<int>> grid;
        unordered_set<long long> res;
        for(auto i:reservedSeats){
            grid[i[0]].push_back(i[1]);
            res.insert(i[0]);
        }
        for(int x:res){
            bool l=true,m=true,r=true;
            for(int st:grid[x]){
                if(st>=2 && st<=5) l=false;
                if(st>=4 && st<=7) m=false;
                if(st>=6 && st<=9) r=false;
            }
            if(l && r) ans+=2;
            else if(l || m || r) ans++;
        }
        ans+=(n-res.size())*2;
        return ans;
    }
};