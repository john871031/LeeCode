class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        vector<double> dp(nums.size(), 0);
        int cur = 0;
        // cout<<(nums.size()/k)+1<<endl;
        for(int i=0;i<nums.size();i++){
            if(i<k) dp[cur] += double(nums[i]);
            else{
                // if(ans<(dp[cur]/k)) ans = dp[cur]/k;
                ans = max(ans, dp[cur]/k);
                cur += 1;
                dp[cur] += dp[cur-1] - double(nums[cur-1]) + double(nums[i]);
            }
        }
        return max(ans, dp[cur]/k);
    }
};
