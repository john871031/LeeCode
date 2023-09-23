class Solution {
public:
    string find(unordered_map<string, string>& root, string s){
        if(root[s]==s) return s;
        return find(root, root[s]);
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string, string> root;
        unordered_map<string, string> owner;
        unordered_map<string, set<string>> res;
        vector<vector<string>> ans;
        for(auto acc:accounts){
            for(int i=1;i<acc.size();i++){
                root[acc[i]] = acc[i];
                owner[acc[i]] = acc[0];
            }
        }
        for(auto acc:accounts){
            string s = find(root, acc[1]);
            for(int i=2;i<acc.size();i++){
                root[find(root, acc[i])] = s; 
            }
        }
        for(auto acc:accounts){
            for(int i=1;i<acc.size();i++){
                res[find(root, acc[i])].insert(acc[i]);
            }
        }
        for(auto r:res){
            vector<string> v(r.second.begin(), r.second.end());
            v.insert(v.begin(), owner[r.first]);
            ans.push_back(v);
        }
        return ans;
        // for(auto acc:accounts){
        //     for(int i=1;i<acc.size();i++){
        //         cout<<acc[i]<<' '<<root[acc[i]]<<endl;
        //     }
        // }
        // for(auto i:root){
        //     cout<<i.first<<' '<<i.second<<endl;
        // }
        return accounts;
    }
};
