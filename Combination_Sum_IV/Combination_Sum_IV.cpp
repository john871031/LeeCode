class Solution {
public:
    int count(vector<int>& nums, int target, vector<int>& dp){
        if(target==0) return 1;
        if(dp[target]!=-1) return dp[target];
        int tmp = 0;
        for(int i=0;i<nums.size();i++){
            if(target>=nums[i]) tmp += count(nums, target-nums[i], dp); 
        }
        return dp[target] = tmp;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return count(nums, target, dp);
    }
};
