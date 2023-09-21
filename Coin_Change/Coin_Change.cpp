class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX-1);
        dp[0] = 0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount]==INT_MAX-1) return -1;
        return dp[amount];
    }
};
