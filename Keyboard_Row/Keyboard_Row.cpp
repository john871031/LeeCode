class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> Mymap;
        string first = "qwertyuiopQWERTYUIOP";
        string second = "asdfghjklASDFGHJKL";
        string third = "zxcvbnmZXCVBNM";
        vector<string> ans;
        for(int i=0;i<first.size();i++){
            Mymap[first[i]] += 1;
        }
        for(int i=0;i<second.size();i++){
            Mymap[second[i]] += 2;
        }
        for(int i=0;i<third.size();i++){
            Mymap[third[i]] += 3;
        }
        int tmp=0;
        for(int i=0;i<words.size();i++){
            tmp=0;
            for(int j=0;j<words[i].size();j++){
                tmp += Mymap[words[i][j]];
            }
            cout<<tmp<<endl;
            if(tmp==Mymap[words[i][0]]*words[i].size()) ans.push_back(words[i]);
        }
        return ans;
    }
};
