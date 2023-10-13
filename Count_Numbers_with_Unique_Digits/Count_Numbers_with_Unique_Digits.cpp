class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int res = 10;
        int count = 9;
        for(int i=2;i<=n;i++){
            count *= (11-i);
            res += count;
        }
        return res;
    }
};
