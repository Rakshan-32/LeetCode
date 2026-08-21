class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans=0;
        string str=word;
        while(sequence.find(str)!=string::npos){
            ans++;
            str+=word;
        }
        return ans;
    }
};