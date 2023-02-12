class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i;
        int j;
        int m = grid.size();
        int n = grid[0].size();
        for(i=1;i<m;i++){
            grid[i][0] += grid[i-1][0];
        }
        for(j=1;j<n;j++){
            grid[0][j] += grid[0][j-1];
        }
        
        j = 1;
        while(j<m){
            for(i=1;i<n;i++){
                grid[j][i] += min(grid[j][i-1], grid[j-1][i]);
            }
            j++;
        }
        return grid[m-1][n-1];
    }
};
