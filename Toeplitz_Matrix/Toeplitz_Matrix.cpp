class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // vector<int> tmp = matrix[0];
        // int m = matrix.size();
        // int n = matrix[0].size();
        // if(m==1) return true;
        for(int i=1;i<matrix.size();i++){
            for(int j=matrix[0].size()-1;j>0;j--){
                if(matrix[i][j]!=matrix[i-1][j-1]) return false;
                // tmp[j] = matrix[i][j];
            }
            // tmp[0] = matrix[i][0];
        }
        return true;
    }
};
