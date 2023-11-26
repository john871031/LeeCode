class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[j][i]==1) matrix[j][i] = matrix[j-1][i]+1;
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            sort(matrix[i].begin(), matrix[i].end());
            for(int j=0;j<n;j++){
                ans = max(ans, (n-j)*matrix[i][j]);
            }
        }
        return ans;
    }
};
