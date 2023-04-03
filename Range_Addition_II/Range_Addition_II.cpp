class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_m = m;
        int min_n = n;
        for(int i=0;i<ops.size();i++){
            if(ops[i][0]<min_m) min_m = ops[i][0];
            if(ops[i][1]<min_n) min_n = ops[i][1];
        }
        return min_m*min_n;
    }
};
