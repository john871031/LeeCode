class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> dp_max(nums.size(), 0);
        vector<int> dp_min(nums.size(), 0);
        int max_p = nums[0];
        dp_max[0] = nums[0];
        dp_min[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            dp_max[i] = max(max(dp_max[i-1]*nums[i], dp_min[i-1]*nums[i]), nums[i]);
            dp_min[i] = min(min(dp_max[i-1]*nums[i], dp_min[i-1]*nums[i]), nums[i]);
            max_p = max(max_p, dp_max[i]);
        }
        return max_p;
    }
};
