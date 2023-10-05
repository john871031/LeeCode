class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long> dp(n+1);
        unordered_map<int, int> mp;
        dp[0] = 1;
        for(int i=0;i<primes.size();i++){
            mp[primes[i]] = 0;
        }
        int i=1;
        while(i<=n){
        // for(int i=1;i<=n;i++){
            // cout<<mp[primes[0]]<<" "<<dp[mp[primes[0]]]<<endl;
            long min = primes[0]*dp[mp[primes[0]]];
            int num = primes[0];
            for(int j=1;j<primes.size();j++){
                // cout<<min<<' '<<primes[j]*dp[mp[primes[j]]]<<endl;
                if(primes[j]*dp[mp[primes[j]]]<min){
                    min = primes[j]*dp[mp[primes[j]]];
                    num = primes[j];
                    // cout<<'a'<<endl;
                }
            }
            // cout<<min<<endl;
            mp[num] += 1;
            // cout<<num<<' '<<mp[num]<<endl;
            if(dp[i-1]<min){
                dp[i]=min;
                // cout<<"i:"<<i<<' '<<dp[i]<<endl;
                i++;
            }  
            
        }
        // cout<<mp[2]<<endl;
        return dp[n-1];
    }
};
