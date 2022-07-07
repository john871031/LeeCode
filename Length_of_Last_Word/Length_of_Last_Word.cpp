class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
        string tmp;
        
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                tmp += s[i];
            }else{
                if(tmp=="") continue;
                ans = tmp;
                tmp = "";
            }
        }
        
        if(tmp != "") ans = tmp;
        return ans.length();
    }
};
