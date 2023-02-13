class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(i<n){
            n -= i;
            i++;
        }
        if(i==n) return i;
        return i-1;
    }
};
