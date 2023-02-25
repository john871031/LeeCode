class Solution {
public:
    bool check(vector< vector<char> >& board, string word, int i, int j, int index){
        if(index==word.size()){
            return true;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[i].size() || board[i][j]!=word[index]){
            return false;
        }
        char tmp = board[i][j];
        board[i][j] = '0';
        bool c1 = check(board, word, i, j+1, index+1);
        bool c2 = check(board, word, i, j-1, index+1);
        bool c3 = check(board, word, i+1, j, index+1);
        bool c4 = check(board, word, i-1, j, index+1);
        board[i][j] = tmp;
        return c1 || c2 || c3 || c4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(check(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
