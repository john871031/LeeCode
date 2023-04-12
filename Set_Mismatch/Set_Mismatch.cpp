class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = 0;
        int miss = 0;
        vector<int> ans;
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(nums[i]!=i+1 && mp[i+1]<1) dup = i+1;
            if(mp[nums[i]]>1) miss = nums[i];
        }
        ans.push_back(miss);
        ans.push_back(dup);
        return ans;
    }
};
