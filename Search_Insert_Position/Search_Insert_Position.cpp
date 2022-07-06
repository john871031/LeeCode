class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos;
        int first = 0;
        int end = nums.size()-1;
        if(target < nums[0]) return 0;
        else if(target > nums[end]) return end+1;
        while(end>=first){
            pos = (end+first)/2;
            if(nums[pos] == target){
                return pos;
            }else if(target > nums[pos]){
                first = pos+1;
            }else{
                end = pos-1;
            }
        }
        return first;
    }
};
