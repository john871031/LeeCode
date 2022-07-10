class Solution {
public:
    int climbStairs(int n) {
        if(n<4) return n;
        long ans=0;
        long a=2;
        long b=3;
        while(n>3){
            ans = a + b;
            a = b;
            b = ans;
            n--;
        }
        return ans;
    }
};
