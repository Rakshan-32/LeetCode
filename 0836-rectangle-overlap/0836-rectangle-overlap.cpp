class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int r11=rec1[0],r12=rec1[1],r13=rec1[2],r14=rec1[3];
        int r21=rec2[0],r22=rec2[1],r23=rec2[2],r24=rec2[3];
        if(r13>r21 && r14>r22){
            if(r23>r11 && r24>r12) return true;
        }
        return false;
    }
};