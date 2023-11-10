class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size();
        if(n==1) return adjacentPairs[0];
        unordered_map<int, vector<int>> mp;
        unordered_map<int, bool> mark;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            mp[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int start;
        for(auto m:mp){
            if(m.second.size()==1){
                start = m.first;
                // cout<<start<<endl;
                break;
            }
        }
        ans.push_back(start);
        mark[start] = true;
        int cur = mp[start][0];
        // cout<<start<<' '<<cur<<endl;
        for(int i=0;i<n-1;i++){
            // cout<<cur<<endl;
            ans.push_back(cur);
            mark[cur] = true;
            if(!mark[mp[cur][0]]) cur = mp[cur][0];
            else cur = mp[cur][1];
        }
        ans.push_back(cur);
        return ans;
    }
};
