class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                int tmp;
                tmp = nums[i]+nums[j];
                if(target == tmp){
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);
                }
            }
        }
        return nums;
    }
};
