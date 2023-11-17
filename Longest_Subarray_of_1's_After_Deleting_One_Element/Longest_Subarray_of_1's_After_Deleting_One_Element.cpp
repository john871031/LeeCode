class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = 1;
        int i = 0;
        int left = 0;
        int len = nums.size();
        for(;i<len;i++){
            if(nums[i]==0) --k;
            if(k<0 && nums[left++]==0) ++k;
        }
        return i-left-1;
    }
};
