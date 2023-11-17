class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = nums.size();
        int left = 0;
        int i = 0;
        for(;i<len;i++){
            if(nums[i]==0) --k;
            if(k<0 && nums[left++]==0) ++k;
        }
        return i-left;
    }
};
