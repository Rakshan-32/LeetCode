class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        stringstream ss(s);
        string wd;
        while(ss>>wd){
            stk.push(wd);
        }
        string str="";
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
            str+=" ";
        }
        str.pop_back();
        return str;
    }
};