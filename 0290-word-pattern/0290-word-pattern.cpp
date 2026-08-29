class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> mp1;
        unordered_map<char,string> mp2;
        stringstream ss(s);
        string word;
        int i=0;
        while(ss>>word){
            if(mp1.count(word) && mp1[word]!=pattern[i]) return false;
            if(mp2.count(pattern[i]) && mp2[pattern[i]]!=word) return false;
            mp1[word]=pattern[i];
            mp2[pattern[i]]=word;
            i++;
        }
        return i==pattern.size();
    }
};