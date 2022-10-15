class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        vector<int> tmp = intervals[0];
        vector< vector<int> > ans;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=tmp[1] && tmp[0]<=intervals[i][1]){
                tmp[1] = max(tmp[1],intervals[i][1]);
            }else{
                if(ans.size()==0 || ans.back()!=tmp) ans.push_back(tmp);
                tmp = intervals[i];
            }
        }
        if(ans.size()==0 || ans.back()!=tmp) ans.push_back(tmp);
        return ans;
    }
};
