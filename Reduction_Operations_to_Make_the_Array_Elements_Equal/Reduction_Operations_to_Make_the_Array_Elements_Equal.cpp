class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int> mp;
        int len = nums.size();
        int tmp = 0;
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        int lm = mp.size();
        int cur = 0;
        int ans = 0;

        for(auto it=mp.rbegin();it!=mp.rend();it++){
            if(cur==lm-1) break;
            tmp += it->second;
            ans += tmp;
            cur++;
        }
        return ans;
    }
};
