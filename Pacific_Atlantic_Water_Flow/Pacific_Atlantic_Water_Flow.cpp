class Solution {
public:
    void Dfs(vector<vector<int>>& heights, vector<vector<bool>>& mark, int pre, int i, int j){
        int m = heights.size();
        int n = heights[0].size();
        if(i<0 || i>=m || j<0 || j>=n || heights[i][j]<pre || mark[i][j]) return;
        mark[i][j] = true;
        Dfs(heights, mark, heights[i][j], i-1, j);
        Dfs(heights, mark, heights[i][j], i+1, j);
        Dfs(heights, mark, heights[i][j], i, j-1);
        Dfs(heights, mark, heights[i][j], i, j+1);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<bool>> mark_p(m, vector<bool>(n, false));
        vector<vector<bool>> mark_a(m, vector<bool>(n, false));
        for(int i=0;i<m;i++){
            Dfs(heights, mark_p, INT_MIN, i, 0);
            Dfs(heights, mark_a, INT_MIN, i, n-1);
        }
        for(int i=0;i<n;i++){
            Dfs(heights, mark_p, INT_MIN, 0, i);
            Dfs(heights, mark_a, INT_MIN, m-1, i);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mark_p[i][j] && mark_a[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }
};
