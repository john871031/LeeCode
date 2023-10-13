class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> dp(len);
        dp[0].push_back(nums[0]);
        int maxsize = 1;
        int index = 0;
        for(int i=1;i<len;i++){
            int ilen = 0;
            vector<int> v;
            for(int j=i-1;j>=0;j--){
                if(nums[i]%nums[j]==0 && dp[j].size()>ilen){
                    v = dp[j];
                    ilen = dp[j].size();
                }
            }
            dp[i] = v;
            dp[i].push_back(nums[i]);
            if(dp[i].size()>maxsize){
                maxsize = dp[i].size();
                index = i;
            }
        }
        return dp[index];
    }
};
