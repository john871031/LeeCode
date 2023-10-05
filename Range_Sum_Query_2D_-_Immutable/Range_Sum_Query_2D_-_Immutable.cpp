class NumMatrix {
public:
    vector<vector<int>> ans;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return ;
        ans.resize(matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        
        for(int i=1;i<ans.size();i++){
            for(int j=1;j<ans[0].size();j++){
                ans[i][j] = matrix[i-1][j-1] + ans[i][j-1] + ans[i-1][j] - ans[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // cout<<ans[row2][col2]<<" "<<ans[row2][col1-1]<<' '<<ans[row1-1][col2]<<' '<<ans[col1-1][row1-1]<<endl;
        return ans[row2+1][col2+1] - ans[row2+1][col1] - ans[row1][col2+1] + ans[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
