class Solution {
public:
    void check(vector<vector<int>>& grid, int i, int j, int time, queue<pair<int,int>>& res){
        if(i<0 || i>=grid.size() || j<0 ||j>=grid[0].size() || time<0) return;
        if(grid[i][j]==1){
            res.push({i,j});
            grid[i][j] = 2;
        }
        check(grid, i-1, j, time-1, res);
        check(grid, i+1, j, time-1, res);
        check(grid, i, j-1, time-1, res);
        check(grid, i, j+1, time-1, res);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                // cout<<q.front().first<<q.front().second<<endl;
            }
        }
        while(!q.empty()){
            queue<pair<int,int>> res;
            while(!q.empty()){
                int x = q.front().first;
                int y = q.front().second;
                check(grid, x, y, 1, res);
                q.pop();
            }
            ans++;
            q = res;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
                // cout<<q.front().first<<q.front().second<<endl;
            }
        }
        return ans>0?ans-1:0;
    }
};
