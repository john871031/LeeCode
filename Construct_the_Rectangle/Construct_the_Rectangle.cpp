class Solution {
public:
    vector<int> constructRectangle(int area) {
        int sq=sqrt(area);
        int w=1;
        int l=area;
        int diff=area-1;
        vector<int> ans;
        for(int i=2;i<=sq;i++){
            if(area%i==0){
                int tmp_l = area/i;
                int tmp_w = i;
                if((tmp_l-tmp_w)<diff){
                    l = tmp_l;
                    w = tmp_w;
                    diff = l-w;
                }
            }
        }
        ans.push_back(l);
        ans.push_back(w);
        return ans;
    }
};
