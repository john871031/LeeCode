class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum/2;
        if(sum&1) return false;
        vector<bool> dp(target+1, false);
        dp[0] = true;
        for(int n:nums){
            // cout<<n<<endl;
            for(int i=target;i>=n;i--){
                // cout<<"i:"<<dp[i]<<' '<<" i & n:"<<i<<' '<<n<<' '<<dp[i-n]<<endl;
                dp[i] = dp[i] || dp[i-n];
                
            }
        }
        return dp[target];
    }
};
