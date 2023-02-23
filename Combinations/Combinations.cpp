class Solution {
public:
    void Com(int n, int k, vector< vector<int> > &ans, vector<int> &tmp, int i){
        if(tmp.size()==k){
            ans.push_back(tmp);
            return;
        }
        for(int j=i;j<=n;j++){
            tmp.push_back(j);
            Com(n, k, ans, tmp, j+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector< vector<int> > ans;
        vector<int> tmp;
        Com(n, k, ans, tmp, 1);
        return ans;
    }
};
