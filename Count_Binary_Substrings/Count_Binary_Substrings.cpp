class Solution {
public:
    int countBinarySubstrings(string s) {
        int pre = 0;
        int cur = 1;
        int ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]) cur++;
            else{
                ans += min(pre, cur);
                pre = cur;
                cur = 1;
            }
        }
        return ans + min(pre, cur);
    }
};
