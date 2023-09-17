class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(edges.size()==0) return {0};
        vector<int> degree(n, 0);
        unordered_map<int, vector<int>> mp;
        vector<int> leaves;
        vector<int> node;
        //紀錄degree、鄰近點
        for(int i=0;i<edges.size();i++){
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        //刪除葉節點
        for(int i=0;i<n;i++){
            if(degree[i]==1) leaves.push_back(i);
        }
        while(n>2){
            node.clear();
            for(int i:leaves){
                for(int j:mp[i]){
                    degree[j]--;
                    if(degree[j]==1) node.push_back(j); 
                }
            }
            n -= leaves.size();
            leaves = node;
        }
        return leaves;
    }
};
