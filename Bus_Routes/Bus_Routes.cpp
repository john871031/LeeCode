class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target) return 0;
        unordered_map<int, vector<int>> mp;
        queue<int> q;
        vector<bool> visited(routes.size());
        int ans = 0;
        for(int i=0;i<routes.size();i++){
            for(int j=0;j<routes[i].size();j++){
                mp[routes[i][j]].push_back(i);
            }
        }
        
        q.push(source);
        while(!q.empty()){
            ans++;
            queue<int> tmp;
            while(!q.empty()){
                int state = q.front();
                q.pop();
                for(int i:mp[state]){
                    if(visited[i]) continue;
                    for(int j:routes[i]){
                        if(target==j) return ans;
                        tmp.push(j);
                    }
                    visited[i] = true;
                }
            }
            q = tmp;
        }
        return -1;
    }
};
