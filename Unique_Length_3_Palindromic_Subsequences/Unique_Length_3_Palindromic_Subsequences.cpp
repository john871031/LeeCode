class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int len = s.size();
        int left = 0, right = len-1;
        int ans = 0;
        unordered_map<char, vector<int>> mp;
        vector<int> v(26,0);
        set<int> t;
        for(int i=0;i<len;i++){
            mp[s[i]].push_back(i);
            v[s[i]-'a']++;
            // cout<<v[s[i]-'a']<<endl;
        }

        for(int i=0;i<26;i++){
            if(v[i]<=1) continue;
            int first = mp[i+'a'].front();
            int last = mp[i+'a'].back();
            if(last-first>1){
                t.clear();
                for(int j=first+1;j<last;j++){
                    t.insert(s[j]);
                }
                ans += t.size();
            }
        }
        return ans;
    }
};
