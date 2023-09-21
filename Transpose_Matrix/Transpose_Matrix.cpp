class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> cm(n, vector<int>(m));
        if(m==n){
            for(int i=0;i<m;i++){
                for(int j=i;j<n;j++){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            return matrix;
        }else{
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cm[j][i] = matrix[i][j];
                }
            }
        }
        return cm;
    }
};
