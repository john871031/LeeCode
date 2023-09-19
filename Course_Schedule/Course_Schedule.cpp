class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses, vector<int>());
        vector<int> inG(numCourses);
        for(auto pre:prerequisites){
            graph[pre[1]].push_back(pre[0]);
            inG[pre[0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            // cout<<i<<' '<<inG[i]<<endl;
            if(inG[i]==0) q.push(i); 
        }
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto i:graph[cur]){
                // cout<<i<<' '<<inG[i]<<endl;
                inG[i]--;
                if(inG[i]==0) q.push(i);
            } 
        }
        for(int i=0;i<numCourses;i++){
            // cout<<i<<' '<<inG[i]<<endl;
            if(inG[i]!=0) return false;
        }
        return true;
    }
};
