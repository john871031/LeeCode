class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<bool>& visited, vector<bool>& record, int num){
        if(record[num]) return;
        record[num] = true;
        for(int i:rooms[num]){
            visited[i] = true;
            dfs(rooms, visited, record, i);  
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size();
        vector<bool> visited(len, false);   //紀錄有無鑰匙
        vector<bool> record(len, false);    //紀錄房間有無進出過
        visited[0] = true;
        dfs(rooms, visited, record, 0);
        for(int i=0;i<len;i++){
            if(!visited[i]) return false;
        }
        return true;
    }
};
