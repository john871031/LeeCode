class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i = 2;
        vector<int> dp(cost.size(), 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        while(i<cost.size()){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
            i++;
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};
