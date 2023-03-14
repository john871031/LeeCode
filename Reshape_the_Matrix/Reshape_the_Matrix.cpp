class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int mat_r = mat.size();
        int mat_c = mat[0].size();
        if(r*c != mat_r*mat_c) return mat;
        vector<vector<int>> ans;
        int x = 0;
        int y = 0;
        for(int i=0;i<r;i++){
            vector<int> tmp;
            for(int j=0;j<c;j++){
                if(y==mat_c){
                    y = 0;
                    x++;
                }
                tmp.push_back(mat[x][y++]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
