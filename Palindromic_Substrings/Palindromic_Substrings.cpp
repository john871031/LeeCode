class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> mark(n, vector<bool>(n));
        // vector<vector<string>> dp(n, vector<string>(n));
        int count = 0;
        for(int i=0;i<n;i++){
            mark[i][i] = true;
            // dp[i][i] = s.substr(i,1);
            count++;
            for(int j=0;j<i;j++){
                mark[j][i] = (s[i]==s[j] && (i-j<2 || mark[j+1][i-1]));
                if(mark[j][i]){
                    // dp[j][i] = s.substr(j,i-j+1);
                    count++;
                }
            }
        }
        return count;
    }
};
