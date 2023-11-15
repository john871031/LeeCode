class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int len = nums.size();
        int ans = 0;
        for(int i=0;i<len;i++){
            int tmp = k-nums[i];
            if(mp[tmp]>0){
                ans++;
                mp[tmp]--;
            }else{
                mp[nums[i]]++;
            }            
        }
        return ans;
    }
};
