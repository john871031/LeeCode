class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int len = nums.size();
        vector<int> left(len,0);

        for(int i=1;i<len;i++){
            left[i] += nums[i-1]+left[i-1];
        }
        int right = 0;
        for(int i=len-1;i>=0;i--){
            left[i] = (nums[i]*i-left[i])+(right-(len-i-1)*nums[i]);
            right += nums[i];
        }
        return left;
    }
};
