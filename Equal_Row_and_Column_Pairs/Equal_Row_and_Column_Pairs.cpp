class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> mp;
        vector<string> res;
        int len = grid.size();
        int ans = 0;
        for(int i=0;i<len;i++){
            string row = "";
            string col = "";
            for(int j=0;j<len;j++){
                row += (to_string(grid[i][j])+" ");
                col += (to_string(grid[j][i])+" ");
            }
            mp[row]++;
            res.push_back(col);
        }
        for(int i=0;i<res.size();i++){
            ans += mp[res[i]];
        }
        return ans;
    }
};
