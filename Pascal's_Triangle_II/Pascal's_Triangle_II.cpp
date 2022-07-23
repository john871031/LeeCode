class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<rowIndex;i++){
            ans.push_back(1);
            for(int j=i;j>0;j--){
                ans[j] = ans[j-1] + ans[j];
            }
        }
        return ans;
    }
};
