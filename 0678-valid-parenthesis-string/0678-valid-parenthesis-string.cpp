class Solution {
public:
    bool checkValidString(string s) {
        int op=0,cp=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                op++;
                cp++;
            }
            else if(s[i]==')'){
                op--;
                cp--;
            }
            else{
                op--;
                cp++;
            }
            if(cp<0) return false;
            op=max(op,0);
        }
        return op==0;
    }
};