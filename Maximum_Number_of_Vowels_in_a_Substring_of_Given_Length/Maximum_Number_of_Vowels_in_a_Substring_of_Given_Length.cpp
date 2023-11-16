class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    int maxVowels(string s, int k) {
        int len = s.size();
        int ans = INT_MIN;
        vector<int> dp(len, 0);
        int cur = 0;
        for(int i=0;i<len;i++){
            if(i<k && isVowel(s[i])){
                dp[cur]++;
            }else if(i>=k){
                ans = max(ans, dp[cur]);
                cur++;
                if(isVowel(s[i]) && !isVowel(s[cur-1])){
                    dp[cur] += (dp[cur-1]+1);
                }else if(!isVowel(s[i]) && isVowel(s[cur-1])){
                    dp[cur] += (dp[cur-1]-1);
                }else dp[cur] += dp[cur-1];
            }
            if(ans==k) return k;
        }
        return max(ans, dp[cur]);
    }
};
