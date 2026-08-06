class Solution {
public:
    int check(int n){
        int p=1;
        while(n>0){
            p*=n%10;
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while((check(n))%t!=0){
            n++;
        }
        return n;
    }
};