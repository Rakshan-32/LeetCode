class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lt(n,0),rt(n,0);
        int maxht=0;
        for(int i=0;i<n;i++){
            maxht=max(height[i],maxht);
            lt[i]=maxht;
        }
        maxht=0;
        for(int i=n-1;i>=0;i--){
            maxht=max(height[i],maxht);
            rt[i]=maxht;
        }
        int ans=0;
        for(int i=0;i<n;i++) ans+=min(lt[i],rt[i])-height[i];
        return ans;
    }
};