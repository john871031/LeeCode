class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0;
        vector<int> num(26,0);
        int ans = 0;
        int longest = 0;
        for(int i=0;i<s.size();i++){
            longest = max(longest, ++num[s[i]-'A']);
            while(i+1-start-longest>k){
                num[s[start]-'A']--;
                start++;
            }
            ans = max(ans, i-start+1);
        }
        return ans;
    }
};
