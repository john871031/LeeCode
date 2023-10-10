class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int len = nums.size();
        vector<int> f(len, nums[0]);
        vector<int> b(len, nums.back());
        
        for(int i=1;i<len;i++){
            f[i] = min(nums[i], f[i-1]);
            b[len-i-1] = max(nums[len-i-1], b[len-i]);
        }
        for(int i=0;i<len;i++){
            if(nums[i]>f[i] && nums[i]<b[i]) return true;
        }
        return false;
    }
};
