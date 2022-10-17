class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int len = intervals.size();
        vector<int> tmp = intervals[0];
        vector< vector<int> > ans;
        for(int i=1;i<len;i++){
            if(tmp[0]<=intervals[i][1] && intervals[i][0]<=tmp[1]){
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
