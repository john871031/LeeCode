class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane’s Algorithm
        int cur=0;
        int max_ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cur = max(nums[i], cur+nums[i]);
            max_ans = max(max_ans, cur);
        }
        return max_ans;
    }
};
