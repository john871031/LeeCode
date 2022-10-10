class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long tmp = n;
        bool flag;
        if(tmp>=0){
            flag = false;
        }else{
            flag = true;
            tmp *= -1;
        }
        while(tmp){
            if(tmp%2==0){
                x *= x;
                tmp /= 2;
            }else{
                ans *= x;
                tmp -= 1;
            }
        }
        if(flag){
            ans = 1/ans;
        }
        return ans;
    }
};
