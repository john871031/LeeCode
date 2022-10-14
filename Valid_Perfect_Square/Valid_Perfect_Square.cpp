class Solution {
public:
    bool isPerfectSquare(int num) {
        long seq=1;
        long tmp=1;
        while(tmp<=num){
            tmp = seq*seq;
            if(tmp==num) return true;
            seq++;
        }
        return false;
    }
};
