class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(), s.end());
        int ans=0;
        bool plus=false;
        int i=1;
        
        while(i<s.size()){
            if(s[i]==s[i-1]){
                ans += 2;
                i += 2;
            }
            else{
                i++;
                plus = true;    
            }
        }
        if(plus | s.size()%2==1) ans += 1;
        return ans;
    }
};
