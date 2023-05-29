class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = -1;
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
                index = i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i==index) continue;
            if(nums[i]*2>max) return -1;
        }
        return index;
    }
};
