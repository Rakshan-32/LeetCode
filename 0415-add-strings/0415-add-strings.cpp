class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1,j=num2.size()-1,ca=0;
        string ans="";
        while(j>=0 || i>=0){
            int sum=ca;
            ca=0;
            int x=(i>=0? num1[i]-'0':0);
            int y=(j>=0? num2[j]-'0':0);
            sum+=(x+y);
            if(sum>9) ca=sum/10;
            sum%=10;
            ans+=to_string(sum);
            i--; j--;
        }
        if(ca) ans+=to_string(ca);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};