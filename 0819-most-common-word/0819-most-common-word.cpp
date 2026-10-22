class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> mp;
        string wd="";
        int mx=0;
        for(char c:paragraph){
            if(isalpha(c)){
                wd+=tolower(c);
            }
            else if(wd!=""){
                if(find(banned.begin(),banned.end(),wd)==banned.end()){
                    mp[wd]++;
                    mx=max(mx,mp[wd]);
                }
                wd="";
            }
        }
        if(wd!="" && find(banned.begin(),banned.end(),wd)==banned.end()){
            mp[wd]++;
            mx=max(mx,mp[wd]);
        }
        for(auto [x,y]:mp){
            if(y==mx) return x;
        }
        return "";
    }
};