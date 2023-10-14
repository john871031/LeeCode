class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int a = 1;
        int b = 1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) a = b+1;
            else if(nums[i]<nums[i-1]) b = a+1;
        }
        return min(n, max(a,b));
    }
};
