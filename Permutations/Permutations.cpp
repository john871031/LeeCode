class Solution {
public:
    vector< vector<int> >ans;
    void check(int index, vector<int> &nums){
        if(index==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index], nums[i]);
            check(index+1, nums);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        check(0, nums);
        return ans;
    }
};
