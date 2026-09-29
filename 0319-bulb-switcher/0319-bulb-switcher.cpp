class Solution {
public:
    int bulbSwitch(int n) {
        if(n<=1) return n;
        int sq=0;
        for(int i=1;i*i<=n;i++) sq++;
        return sq;
    }
};