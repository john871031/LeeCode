class Solution {
public:
    int DFS(int i, int j, vector<vector<int>>& triangle, vector<vector<bool>>& check){
        if(i==triangle.size()) return 0;
        if(check[i][j]) return triangle[i][j];
        long left = DFS(i+1, j, triangle, check);
        long right = DFS(i+1, j+1, triangle, check);
        triangle[i][j] += min(left, right);
        check[i][j] = true;
        return triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<bool>> check(triangle.size(), vector<bool>(triangle.size(), false));
        DFS(0, 0, triangle, check);
        return triangle[0][0];
    }
};
