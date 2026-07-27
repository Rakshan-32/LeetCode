class Solution {
public:
    int find(vector<int>& arr,int x){
        if(arr[x]==x) return x;
        return arr[x]=find(arr,arr[x]);
    }
    void join(vector<int>& arr,int a,int b){
        a=find(arr,a);
        b=find(arr,b);
        if(a!=b)
            arr[b]=a;
    }
    int latestDayToCross(int r, int c, vector<vector<int>>& cells) {
        vector<int> arr(r*c+2);
        vector<bool> water(r*c+2,false);
        for(int i=0;i<r*c+2;i++){
            arr[i]=i;
        }
        int left=r*c;
        int right=r*c+1;
        int diff[8][2]={{-1,-1},{0,-1},{1,-1},{-1,0}, {1,0},{-1,1},{0,1},{1,1}};
        int day=0;
        for(auto it:cells){
            int row=it[0]-1;
            int col=it[1]-1;
            int pos=row*c+col;
            water[pos]=true;
            for(auto i:diff){
                int ar=row+i[0];
                int ac=col+i[1];
                if(ar>=0 && ar<r && ac>=0 && ac<c && water[ar*c+ac]){
                        join(arr,pos,ar*c+ac);
                }
            }
            if(col==0){
                join(arr,pos,left);
            }
            if(col==c-1){
                join(arr,pos,right);
            }
            if(find(arr,left)==find(arr,right))
                return day;
            day++;
        }
        return day;
    }
};