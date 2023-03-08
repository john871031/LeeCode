class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='P' || s[i]=='A') l=0;
            if(s[i]=='L') l++;
            if(s[i]=='A') a++;
            if(a>1 || l>=3) return false;
            // if(l>=3) return false;
        }
        return true;
    }
};
