class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // sort(p.begin(), p.end());
        // int slen = s.size();
        // int plen = p.size();
        // vector<int> ans;
        // int i=0;
        // while(i<=slen-plen){
        //     string tmp = s.substr(i, plen);
        //     sort(tmp.begin(), tmp.end());
        //     if(tmp==p){
        //         ans.push_back(i);
        //         int j=i+plen;
        //         while(j<slen && s[j]==s[i]){
        //             i++;
        //             j++;
        //             ans.push_back(i);
        //         }
        //         i += 2;
        //     }else{
        //         i++;
        //     }
        // }
        // return ans;

        int slen = s.size();
        int plen = p.size();
        vector<int> ans;
        if(plen>slen) return ans;
        vector<int> s1(26, 0);
        vector<int> p1(26, 0);
        for(int i=0;i<plen;i++){
            s1[s[i]-'a']++;
            p1[p[i]-'a']++;
        }
        if(s1==p1) ans.push_back(0);
        for(int i=plen;i<slen;i++){
            s1[s[i-plen]-'a']--;
            s1[s[i]-'a']++;
            if(s1==p1) ans.push_back(i-plen+1);
        }
        return ans;
    }
};
