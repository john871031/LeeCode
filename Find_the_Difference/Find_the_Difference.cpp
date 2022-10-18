class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> s1;
        unordered_map<char, int> t1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        t1[t[s.size()]]++;
        for(int i=0;i<s.size();i++){
            if(s1[s[i]] != t1[s[i]]) return s[i];
        }
        
        return t[s.size()];
    }
};
