class Solution {
public:
    int numTrees(int n) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
    
        int cur=2;
        while(cur<=n){
            // cout<<cur<<":"<<endl;
            int num = 0;
            for(int i=1;i<=cur;i++){
                // cout<<i<<endl;
                int left = i-1;
                int right = cur-i;
                if(dp[left]==0 || dp[right]==0) num += dp[left] + dp[right];
                else num += dp[left] * dp[right];
            }
            dp.push_back(num);
            cur++;
        }
        
        return dp[n];
    }
};
