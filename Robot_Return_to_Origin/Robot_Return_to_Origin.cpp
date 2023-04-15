class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0;
        int j=0;
        int cur = 0;
        while(cur<moves.size()){
            switch(moves[cur]){
                case 'U':
                    j -= 1;
                    break;
                case 'D':
                    j += 1;
                    break;
                case 'L':
                    i -= 1;
                    break;
                default:
                    i += 1;
                    break;
            }
            cur += 1;
        }
        if((i==0) && (j==0)) return true;
        return false;
    }
};
