class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tg=0,tc=0;
        int cur=0,ans=0;
        for(int i=0;i<n;i++){
            tg+=gas[i];
            tc+=cost[i];
            cur+=gas[i]-cost[i];
            if(cur<0){
                ans=i+1;
                cur=0;
            }
        }
        return ((tg<tc)? -1:ans);
    }
};