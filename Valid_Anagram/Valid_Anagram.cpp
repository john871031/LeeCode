class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i]) return false;
        // }
        // return true;

        if(s.size()!=t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) return true;
        return false;
        
        // if(s.size()!=t.size()) return false;
        // map<char, int> map_s1;
        // map<char, int> map_t1;
        // for(int i=0;i<s.size();i++){
        //     map_s1[s[i]]++;
        //     map_t1[t[i]]++;
        // }
        // for(auto k=map_s1.begin();k!=map_s1.end();k++){
        //     // cout<<k->second<<' '<<k->first<<' '<<map_t1[k->first]<<endl;
        //     if(k->second!=map_t1[k->first]) return false;
        // }
        // return true;
    }
};
