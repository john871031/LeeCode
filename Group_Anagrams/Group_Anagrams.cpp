class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> key;
        vector<string> tmp = strs;
        for(int i=0;i<strs.size();i++){
            sort(tmp[i].begin(), tmp[i].end());
            key[tmp[i]].push_back(strs[i]);
        }
        vector< vector<string> > ans;
        // cout <<key[0].first;
        for(auto j:key){
            ans.push_back(j.second);
        }
        return ans;
    }
};
