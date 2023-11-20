class Solution {
public:
    // static bool cmp(vector<int> a, vector<int> b){
    //     return a[1]<b[1];
    // }
    int findMinArrowShots(vector<vector<int>>& points) {
        int len = points.size();
        int ans = 1;
        int last = 0;
        sort(points.begin(), points.end());
        int second = points[0][1];
        // cout<<points[0][0]<<' '<<points[0][1]<<' '<<second<<endl;
        for(int i=1;i<len;i++){
            // cout<<points[i][0]<<' '<<points[i][1]<<' '<<second<<endl;
            if(points[i][0]<=second){
                second = min(second, points[i][1]);
            }else{
                ans++;
                second = points[i][1];
            }
        }
        return ans;
    }
};
