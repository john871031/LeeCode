class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int len = nums.size();
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto m:mp){
            if(m.second==1) return -1;
            else{
                ans += m.second/3;
                if(m.second%3!=0) ans += 1;
            }
        }
        return ans;
    }
};
