class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        string s3 = s1 + " " + s2;
        int start = 0;
        for(int i=0;i<s3.size();i++){
            if(s3[i]==' '){
                mp[s3.substr(start, i-start)]++;
                start = i+1;
            }
        }
        if(start<s3.size()) mp[s3.substr(start)]++;
        for(auto m:mp){
            // cout<<m.first<<' '<<m.second<<endl;
            if(m.second<=1) ans.push_back(m.first);
        }
        return ans;
    }
};
