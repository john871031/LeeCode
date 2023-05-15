class Solution {
public:
    string reverseWords(string s) {
        string pre;
        string ans;
        while(s.size()>0 && s.back()==' ') s.pop_back();
        reverse(s.begin(), s.end());
        while(s.size()>0 && s.back()==' ') s.pop_back();
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                pre += s[i];
            }else{
                if(pre.size()==0) continue;
                reverse(pre.begin(), pre.end());
                ans += pre + ' ';
                pre = "";
            }
        }
        if(pre.size()>0){
            reverse(pre.begin(), pre.end());
            ans += pre;
        }
        return ans;
    }
};
