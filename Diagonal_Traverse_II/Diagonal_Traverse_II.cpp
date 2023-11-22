class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        if((a.first+a.second)<(b.first+b.second)){
            return true;
        }else if((a.first+a.second)==(b.first+b.second)){
            return a.first>b.first;
        }
        return false; 
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        int len = nums.size();
        vector<pair<int,int>> tmp;
        for(int i=0;i<len;i++){
            for(int j=0;j<nums[i].size();j++){
                tmp.push_back({i, j});
            }
        }
        sort(tmp.begin(),tmp.end(),cmp);
        for(int i=0;i<tmp.size();i++){
            ans.push_back(nums[tmp[i].first][tmp[i].second]);
        }
        return ans;
    }
};
