class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int len = l.size();
        vector<bool> ans;
        for(int i=0;i<len;i++){
            if(r[i]-l[i]<2){
                ans.push_back(true);
                continue;
            }
            vector<int> tmp(nums.begin()+l[i], nums.begin()+r[i]+1);
            // cout<<tmp.size()<<endl;
            sort(tmp.begin(), tmp.end());
            int dif = tmp[1]-tmp[0];
            // cout<<i<<' '<<tmp[0]<<' '<<tmp[1]<<endl;
            bool same = true;
            for(int j=2;j<tmp.size();j++){
                // cout<<i<<' '<<tmp[j-1]<<' '<<tmp[j]<<endl;
                if(tmp[j]-tmp[j-1]!=dif){
                    ans.push_back(false);
                    same = false;
                    break;
                }
            }
            if(same) ans.push_back(true);
        }
        return ans;
    }
};
