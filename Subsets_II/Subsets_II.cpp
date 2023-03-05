class Solution {
public:
    void check(vector< vector<int> > &ans, vector<int> &tmp, int n, vector<int> nums){
        bool flag = true;
        // sort(tmp.begin(), tmp.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]==tmp) flag = false;
        }
        if(flag) ans.push_back(tmp);
        // ans.push_back(tmp);
        if(n==nums.size()){
            return;
        }
        for(int i=n;i<nums.size();i++){
            tmp.push_back(nums[i]);
            check(ans, tmp, i+1, nums);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector< vector<int> > ans;
        vector<int> tmp;
        sort(nums.begin(), nums.end());
        check(ans, tmp, 0, nums);
        return ans;
    }
};
