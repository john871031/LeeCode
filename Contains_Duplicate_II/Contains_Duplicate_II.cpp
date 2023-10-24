class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        unordered_map<int, bool> mark;
        for(int i=0;i<nums.size();i++){
            if(!mark[nums[i]]){
                mark[nums[i]] = true;
                mp[nums[i]] = i;
            }else{
                if(i-mp[nums[i]]<=k) return true;
                mp[nums[i]] = i;
            }
        }
        return false;
    }
};
