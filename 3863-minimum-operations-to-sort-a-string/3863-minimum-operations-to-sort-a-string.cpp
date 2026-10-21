class Solution {
public:
    int minOperations(string s) {
        string str=s;
        sort(str.begin(),str.end());
        if(s==str) return 0;
        int n=s.size();
        if(n==2) return -1;
        char mn=str[0],mx=str[n-1];
        if(s[0]==mn || s[n-1]==mx) return 1;
        for(int i=1;i<n-1;i++){
            if(s[i]==mn || s[i]==mx) return 2;
        }
        return 3;

    }
};