class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n, 0);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            while(!pq.empty() && pq.top().second<i-k){
                pq.pop();
            }
            dp[i] += nums[i];
            if(!pq.empty()) dp[i] += pq.top().first;
            else dp[i] += 0;
            pq.push({dp[i],i});
        }
        
        return dp[n-1];
    }
};
