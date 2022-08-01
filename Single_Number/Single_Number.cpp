class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        if(nums.size()<2) return nums[0];
        for(i=0;i<nums.size();i=i+2){
            if(nums[i]==nums[j]){
                j += 2;
            }else{
                break;
            }
        }
        return nums[i];
    }
};
