class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> q;
        for(auto v:matrix){
            for(auto m:v){
                if(q.size()<k){
                    q.push(m);
                }else if(m<q.top()){
                    q.pop();
                    q.push(m);
                }else{
                    break;
                }
            }
        }
        return q.top();
    }
};
