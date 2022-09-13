class Solution {
public:
    void check(int i, vector< vector <int> > &ans, vector<int> &candidates, vector<int> tmp, int target){
        // for (int j = 0; j < tmp.size(); j++) {
        //     cout << tmp[j] << " ";
        // }
        // cout << "\n";
        // cout << "target: " << target << endl;
        if(target==0){
            ans.push_back(tmp);
            return;
        } 
        if(target<0) return;
        if(i==candidates.size()) return;
        check(i+1, ans, candidates, tmp, target);
        tmp.push_back(candidates[i]);
        check(i, ans, candidates, tmp, target-candidates[i]);
        tmp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector< vector<int> > ans;
        vector<int> tmp;
        check(0, ans, candidates, tmp, target);
        return ans;
    }
};
