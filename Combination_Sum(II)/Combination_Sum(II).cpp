class Solution {
public:
    void check(int i, vector< vector<int> > &ans, vector<int> candidates, vector<int> tmp, int target){
        if(target==0){
            ans.push_back(tmp);
            return;
        }
        if(i==candidates.size()) return;
        
        for(int j=i;j<candidates.size();j++){   //每個index當一次開頭
            if(j>i && candidates[j]==candidates[j-1]) continue;     //避免ans中有相同陣列
            if(target<candidates[i]) return;
            tmp.push_back(candidates[j]);
            check(j+1, ans, candidates, tmp, target-candidates[j]);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector< vector<int> > ans;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());
        
        check(0, ans, candidates, tmp, target);
        return ans;        
    }
};
