class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> zeropoint;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zeropoint.push_back(i);
                    zeropoint.push_back(j);
                }
            }
        }
        for(int i=0;i<zeropoint.size();i+=2){
            for(int j=0;j<n;j++){
                matrix[zeropoint[i]][j] = 0;
            }
            for(int z=0;z<m;z++){
                matrix[z][zeropoint[i+1]] = 0;
            }
        }
    }
};
