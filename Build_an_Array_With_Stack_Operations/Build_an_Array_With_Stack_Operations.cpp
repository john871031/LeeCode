class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> op;
        vector<int> ans;
        int cur = 0;
        for(int i=0;i<n && cur<target.size();i++){
            ans.push_back(i+1);
            op.push_back("Push");
            if(target[cur]==ans[cur]){
                cur++;
                continue;
            } 
            ans.pop_back();
            op.push_back("Pop");
        }
        return op;
    }
};
