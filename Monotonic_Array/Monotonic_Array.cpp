class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int p = 0;
        int n = 0;
        int len = nums.size();
        if(len<2) return true;
        for(int i=1;i<len;i++){
            if(nums[i]>nums[i-1]) p++;
            else if(nums[i]<nums[i-1]) n++;
            else{
                p++;
                n++;
            }
        }
        if(p==len-1 || n==len-1) return true;
        return false;
    }
};
