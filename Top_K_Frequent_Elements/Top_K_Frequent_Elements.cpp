class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> q;
        vector<int> ans;
        for(auto n:nums) mp[n]++;
        for(auto m:mp) q.push({m.second, m.first});
        for(int i=0;i<k;i++){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
