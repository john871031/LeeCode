class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                tmp++;
            }else{
                ans = max(ans, tmp);
                tmp = 0;
            }
        }
        ans = max(ans, tmp);
        return ans;
    }
};
