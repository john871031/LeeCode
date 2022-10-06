class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return false;
        while(n!=1 && n!=2 && n!=3 && n!=5){
            if(n%2!=0 && n%3!=0 && n%5!=0) return false;
            n%2==0?n/=2:n;
            n%3==0?n/=3:n;
            n%5==0?n/=5:n;
        }
        return true;
    }
};
