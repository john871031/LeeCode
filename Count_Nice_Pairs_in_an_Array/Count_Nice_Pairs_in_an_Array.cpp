class Solution {
public:
    int rev(int n){
        int ans = 0;
        while(n!=0){
            ans = ans*10 + n%10;
            n /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int,int> mp(len);
        long ans = 0;
        for(int i=0;i<len;i++){
            int tmp = nums[i] - rev(nums[i]);
            if(mp[tmp]>0) ans += mp[tmp];
            mp[tmp]++;
        }

        return ans%1000000007;
    }
};
