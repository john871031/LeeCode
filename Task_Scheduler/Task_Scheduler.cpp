class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) return tasks.size();
        unordered_map<char, int> mp;
        priority_queue <int> pq;
        int len = tasks.size();
        for(int i=0;i<len;i++){
            mp[tasks[i]]++;
        }
        for(auto tmp:mp) pq.push(tmp.second);
        int ans = 0;
        int mx = pq.top();
        int i = 0;
        while(!pq.empty() && pq.top()==mx){
            i++;
            pq.pop();
        }
        ans = mx*i + (mx-1)*n - (i-1)*(mx-1);
        return max(len, ans);
    }
};
