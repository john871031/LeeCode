class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n = nums.size()-1;
        vector<int> dp_l(n+1, 0);
        vector<int> dp_r(n+1, 0);
        for(int i=1;i<=n;i++){
            dp_l[i] = dp_l[i-1] + nums[i-1];
            dp_r[n-i] = dp_r[n-i+1] + nums[n-i+1];
        }
        for(int i=0;i<=n;i++){
            if(dp_l[i]==dp_r[i]) return i;
        }
        return -1;
    }
};
