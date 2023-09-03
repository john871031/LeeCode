class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> q;
        vector<vector<int>> dir{{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j] = INT_MAX;
            }
        }
        while(!q.empty()){
            auto cur = q.front();
            for(int i=0;i<dir.size();i++){
                int x = cur.first + dir[i][0];
                int y = cur.second + dir[i][1];
                // cout<<x<<" "<<y<<endl;
                // cout<<cur.first<<' '<<cur.second<<endl;
                if(x<0 || x>=mat.size() || y<0 || y>=mat[0].size() || mat[x][y]==0 || mat[x][y] <= mat[cur.first][cur.second] + 1) continue;
                mat[x][y] = mat[cur.first][cur.second] + 1;
                q.push({x,y});
            }
            q.pop();
        }
        return mat;
    }
};
