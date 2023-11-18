class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int i=0;
        int left = 0;
        int len = nums.size();
        long sum = 0;
        int ans = INT_MIN;
        sort(nums.begin(), nums.end());
        for(;i<len;i++){
            sum += nums[i];
            while(sum+k<(long)(nums[i])*(i-left+1)){
                sum -= nums[left++];
            }
            ans = max(ans, i-left+1);
        }
        return ans;
    }
};
