class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        else if(nums.size()==2) return max(nums[0], nums[1]);
        nums[2] += nums[0];
        int max_num = max(nums[0], nums[1]);
        for(int i=3;i<nums.size();i++){
            nums[i] = max(nums[i]+nums[i-2], nums[i]+max_num);
            max_num = max(nums[i-1], max_num);
        }
        return max(nums[nums.size()-1], nums[nums.size()-2]);
    }
};
