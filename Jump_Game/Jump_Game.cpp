class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cur=0;
        int end=nums.size()-1;
        while(cur<end){
            int len=nums[cur];
            if(nums[cur]==0 && cur==0) return false;
            if(cur+len>=end) return true;
            else if(nums[cur]==0) cur--;
            else if(nums[cur+len]!=0) cur += len;
            else if(nums[cur+len]==0) nums[cur]--;
        }
        if(cur>=end) return true;
        return false;
    }
};
