class Solution {
public:
    int find(vector<int>& res, int i){
        while(res[i]!=-1) i = res[i];
        return i;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> res(1001, -1);
        for(auto edge:edges){
            int a = find(res, edge[0]);
            int b = find(res, edge[1]);
            if(a==b) return edge;
            else res[a] = b;
        }
        return {};
    }
};
