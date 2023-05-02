class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        int max = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) dp[i] += dp[i-1];
            if(dp[i]>max) max = dp[i];
        }
        return max;
    }
};
