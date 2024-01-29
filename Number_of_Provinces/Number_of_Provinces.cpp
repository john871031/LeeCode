class Solution {
public:
    void visited(vector<vector<int>>& isConnected, int i){
        if(isConnected[i][i]==0) return;
        isConnected[i][i] = 0;
        for(int j=0;j<isConnected[i].size();j++){
            if(isConnected[i][j]){
                visited(isConnected, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected.size();
        int count = 0;
        for(int i=0;i<m;i++){
            if(isConnected[i][i]){
                count++;
                visited(isConnected, i);
            }
        }
        return count;
    }
};
