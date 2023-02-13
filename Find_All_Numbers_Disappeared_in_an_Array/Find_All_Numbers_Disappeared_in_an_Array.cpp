class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> check(nums.size(), 0);
        for(int i=0;i<nums.size();i++){
            check[nums[i]-1] = nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(check[i]!=i+1) ans.push_back(i+1);
        }
        return ans;
    }
};
