class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>tmp = score;
        vector<string> ans;
        sort(tmp.begin(), tmp.end());
        unordered_map<int, int> Mymap;
        int j = tmp.size();
        for(int i=0; i<tmp.size();i++){
            Mymap[tmp[i]] = j--;
        }

        for(int i=0; i<score.size();i++){
            if(score[i]==tmp[score.size()-1]) ans.push_back("Gold Medal");
            else if(score[i]==tmp[score.size()-2]) ans.push_back("Silver Medal");
            else if(score[i]==tmp[score.size()-3]) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(Mymap[score[i]]));
        }
        return ans;
    }
};
