class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int num = dist.size();
        for(int i=0;i<num;i++){
            if(dist[i]%speed[i]==0) pq.push(dist[i]/speed[i]);
            else pq.push(dist[i]/speed[i]+1);
        }
        int cur = 1;    //每分鐘殺一隻
        while(!pq.empty()){
            int fir = pq.top();
            pq.pop();
            if(pq.top() == cur++) break;
        }
        return num - pq.size();
    }
};
