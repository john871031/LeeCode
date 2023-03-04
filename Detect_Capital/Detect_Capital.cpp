class Solution {
public:
    bool detectCapitalUse(string word) {
        int ans=0;
        bool flag=false;
        if(int(word[0])>=65 && int(word[0])<=90) flag = true; 
        for(int i=0;i<word.length();i++){
            if(int(word[i])>=97 && int(word[i])<=122) ans += 1; 
            else ans += 2;
        }
        if(ans==word.length()) return true;
        else if(ans==word.length()*2) return true;
        else if(ans==word.length()+1 && flag) return true;
        return false;
    }
};
