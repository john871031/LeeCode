class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector< set<char> > row(9);
        vector< set<char> > col(9);
        vector< set<char> > box(9);
        int k;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    k = i/3*3 + j/3;
                    if(row[i].find(board[i][j])!=row[i].end() || col[j].find(board[i][j])!=col[j].end() || box[k].find(board[i][j])!=box[k].end()){
                        return false;
                    }else{
                        row[i].insert(board[i][j]);
                        col[j].insert(board[i][j]);
                        box[k].insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
