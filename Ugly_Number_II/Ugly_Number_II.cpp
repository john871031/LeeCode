class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1) return 1;
        vector<int> u(n+1);
        int u2 = 0;
        int u3 = 0;
        int u5 = 0;
        u[0] = 1;
        for(int i=1;i<=n;i++){
            u[i] = min(u[u2]*2, min(u[u3]*3, u[u5]*5));
            if(u[i]==u[u2]*2) u2++;
            if(u[i]==u[u3]*3) u3++;
            if(u[i]==u[u5]*5) u5++;
        }
        return u[n-1];
    }
};
