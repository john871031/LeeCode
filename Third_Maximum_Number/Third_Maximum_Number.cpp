class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3) return nums[nums.size()-1];
        int third = nums[nums.size()-1];
        int count = 1;
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]!=third){
                third = nums[i];
                count++;
            }
            if(count==3) return third;
        }
        return nums[nums.size()-1];
    }
};
