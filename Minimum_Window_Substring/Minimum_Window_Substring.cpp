class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";

        int total = t.size();
        unordered_map<char, int> num;
        for(int i=0;i<t.size();i++){
            num[t[i]]++;
        }
        int j = 0;
        int len = INT_MAX;
        int start = -1;
        // string ans;
        for(int i=0;i<s.size();i++){
            num[s[i]]--;
            if(num[s[i]]>=0) total--;
            while(total==0){
                if(i+1-j<len){
                    len = i+1-j;
                    start = j;
                }
                if(++num[s[j]]>0) total++;
                j++;
            }
        }
        if(start==-1) return "";
        return s.substr(start, len);
    }
};
