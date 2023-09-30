class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return nums;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int len = nums.size();
        for(int i=1;i<len-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) ans.push_back(nums[i]);
        }
        if(nums[0]!=nums[1]) ans.push_back(nums[0]);
        if(nums[len-1]!=nums[len-2]) ans.push_back(nums[len-1]);
        return ans;
    }
};
