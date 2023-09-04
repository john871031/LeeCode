class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),cmp);
        int cur = 1;
        int rec = 0;
        int ans = 0;
        // for(int i=0;i<intervals.size();i++){
        //     cout<<intervals[i][0]<<' '<<intervals[i][1]<<endl;
        // }
        while(cur<intervals.size()){
            if(intervals[rec][1]<=intervals[cur][0]){
                rec = cur;
                cur++;
                continue;
            }
            cur++;
            ans++;
        }
        return ans;
    }
};
