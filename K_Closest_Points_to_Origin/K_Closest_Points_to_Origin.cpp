class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        vector<vector<int>> dis;
        vector<int> tmp;
        for(int i=0;i<points.size();i++){
            tmp.push_back(pow(points[i][0],2)+pow(points[i][1],2));
            tmp.push_back(i);
            dis.push_back(tmp);
            tmp.clear();
        }
        sort(dis.begin(),dis.end());
        for(int i=0;i<k;i++){
            ans.push_back(points[dis[i][1]]);
        }
        return ans;
    }
};
