class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int len = nums.size();
        int ans = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=0;i<len/2;i++){
            ans = max(ans, nums[i]+nums[len-i-1]);
        }
        return ans;
    }
};
