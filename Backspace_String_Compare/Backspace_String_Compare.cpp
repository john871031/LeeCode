class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1;
        string t1;
        int count = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='#'){
                count++;
                continue;
            } 
            if(count>0){
                count--;
            }else{
                s1 = s1 + s[i];
            }
        }
        count = 0;
        for(int i=t.size()-1;i>=0;i--){
            if(t[i]=='#'){
                count++;
                continue;
            } 
            if(count>0){
                count--;
            }else{
                t1 = t1 + t[i];
            }
        }
        if(s1==t1) return true;
        return false;
    }
};
