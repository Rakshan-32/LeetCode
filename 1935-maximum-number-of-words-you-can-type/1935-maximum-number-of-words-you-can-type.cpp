class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> arr;
        stringstream ss(text);
        string w;
        while(ss>>w){
            arr.push_back(w);
        }
        int ans=0;
        for(string s:arr){
            bool ok=true;
            for(char c:brokenLetters){
                if(s.find(c)!=string::npos){
                    ok=false;
                    break;
                }
            }
            if(ok) ans++;
        }
        return ans;
    }
};