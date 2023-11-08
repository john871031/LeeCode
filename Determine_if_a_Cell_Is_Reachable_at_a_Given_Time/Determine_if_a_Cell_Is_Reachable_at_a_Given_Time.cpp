class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int step = max(abs(sx-fx), abs(sy-fy));
        if(sx==fx && sy==fy && t==1) return false;
        return step<=t;
    }
};
