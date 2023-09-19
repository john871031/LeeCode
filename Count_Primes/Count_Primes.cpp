class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> isprime(n+1, 1);
        int n_sqrt = int(sqrt(n));
        for(int i=2;i<=n_sqrt;i++){
            if(isprime[i]){
                for(int j=i+i;j<=n;j+=i){
                    isprime[j] = 0;
                }
            }
        }
        int ans = 0;
        for(int i=2;i<n;i++){
            if(isprime[i]) ans++;
        }
        return ans;
    }
};
