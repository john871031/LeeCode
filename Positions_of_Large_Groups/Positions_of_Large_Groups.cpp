class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int start = 0;
        int end = 0;
        vector<vector<int>> ans;
        char ch = s[0];
        int num = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]==ch){
                num++;
                end = i;
                continue;
            }else{
                ch = s[i];
                if(num>=3) ans.push_back({start,end});
                start = i;
                num = 1;
            }
        }
        end = s.size()-1;
        if(num>=3) ans.push_back({start, end});
        return ans;
    }
};
