class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        vector<int> val(n);
        int sum=0;
        for(int i=0;i<n;i++){
            val[i]=26-(s[i]-'a');
            val[i]*=(i+1);
            sum+=val[i];
        }
        return sum;
    }
};