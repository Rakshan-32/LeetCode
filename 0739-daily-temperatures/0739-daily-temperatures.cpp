class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size());
        stack<int> stk;
        for(int i=0;i<temp.size();i++){
            while(!stk.empty() && temp[stk.top()]<temp[i]){
                ans[stk.top()]=i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return ans;
    }
};