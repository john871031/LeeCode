class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') continue;
            end = i;
            reverse(s.begin()+start, s.begin()+end);
            if(i<=s.size()-1) start = i+1;
        }
        if(start<s.size()-1) reverse(s.begin()+start, s.end());

        return s;
    }
};
