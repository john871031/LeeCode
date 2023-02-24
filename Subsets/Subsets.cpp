class Solution {
public:
    void check(vector< vector<int> > &ans, vector<int> &tmp, int n, vector<int> nums){
        ans.push_back(tmp);
        if(n==nums.size()){
            return;
        }
        for(int i=n;i<nums.size();i++){
            tmp.push_back(nums[i]);
            check(ans, tmp, i+1, nums);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector<int> > ans;
        vector<int> tmp;
        int len = nums.size();
        check(ans, tmp, 0, nums);
        return ans;
    }
};
