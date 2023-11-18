class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        map<char, int> mp1;
        map<char, int> mp2;
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        if(mp1.size()!=mp2.size()) return false;
        for(auto m:mp1){
            v1[m.first-'a'] = m.second;
        }
        for(auto m:mp2){
            v2[m.first-'a'] = m.second;
        }
        for(int i=0;i<26;i++){
            if((v1[i]==0 && v2[i]!=0) || (v1[i]!=0) && v2[i]==0) return false;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};
