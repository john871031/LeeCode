class Solution {
public:
    int knightDialer(int n) {
        if(n==1) return 10;
        int ans = 0;
        int M = 1e9+7;
        vector<vector<int>> dp(n, vector<int>(10));
        vector<vector<int>> path{{4, 6}, {6, 8}, {7, 9}, {4, 8}, {3, 9, 0}, {}, {1, 7, 0}, {2, 6}, {1, 9}, {4, 2}};
        for(int i=0;i<10;i++) dp[0][i] = 1;

        for(int i=1;i<n;i++){
            for(int j=0;j<10;j++){
                for(int num:path[j]){
                    dp[i][j] = (dp[i][j]+dp[i-1][num])%M;
                }
            }
        }
        for(int i=0;i<10;i++) ans = (ans+dp[n-1][i])%M;


        return ans;
    }
};
