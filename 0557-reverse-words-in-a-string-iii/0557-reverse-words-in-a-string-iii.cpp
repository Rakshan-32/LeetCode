class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        stringstream ss(s);
        string wd;
        while(ss>>wd){
            arr.push_back(wd);
        }
        string ans="";
        for(int i=0;i<arr.size();i++){
            string str=arr[i];
            reverse(str.begin(),str.end());
            ans+=str;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};