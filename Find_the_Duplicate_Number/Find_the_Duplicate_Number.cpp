class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int one = nums[0];
        int two = nums[0];
        one = nums[one];
        two = nums[nums[two]];
        while(one!=two){
            one = nums[one];
            two = nums[nums[two]];
        }
        one = nums[0];
        while(one!=two){
            one = nums[one];
            two = nums[two];
        }
        return one;
    }
};
