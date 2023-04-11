class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int first = 0;
        int second = 0;
        for(int i: nums){
            first = (first^i) & ~second;
            second = (second^i) & ~first;
        }
        return first;
    }
};
