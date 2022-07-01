class Solution {
public:
    int reverse(int x) {
        int rev_x = 0;
        int neg = 1;
        if(x < 0){
            neg = -1;
            if(x<=INT_MIN) return 0;
            x *= neg;
        }
        int max = INT_MAX/10;
        while(x){
            if(rev_x > max) return 0;
            rev_x = rev_x*10 + x%10;
            x /= 10;
        }
        if(neg<0){
            rev_x *= neg;
        }
        return rev_x;
    }
};
