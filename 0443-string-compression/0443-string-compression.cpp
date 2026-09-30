class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int i=0;
        while(i<chars.size()){
            char ch=chars[i];
            int j=i;
            int cnt=0;
            while(j<chars.size() && ch==chars[j]){
                cnt++;
                j++;
            }
            s+=ch;
            if(cnt>1) s+=to_string(cnt);
            i=j;
        }
        for(int i=0;i<s.size();i++){
            chars[i]=s[i];
        }
        return s.size();
    }
};