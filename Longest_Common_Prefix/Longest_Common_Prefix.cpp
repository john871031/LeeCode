class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> ans;
        vector<char> tmp;
        int len = 0;
        int seq = 0;
        int num;
        
        if(strs.size()<=1){
            return strs[0];
        }
        len = strs[0].size();
        for(int i=0;i<strs.size();i++){
            if(len>strs[i].size()){
                len = strs[i].size();
                seq = i;
            }
        }
        for(int i=0;i<strs[seq].size();i++){
            tmp.insert(tmp.begin()+i, strs[seq][i]);
        }
        for(int j=0;j<tmp.size();j++){
            num = 0;
            for(int k=0;k<strs.size();k++){
                if(tmp[j]==strs[k][j]){
                    num++;
                }
            }
            if(num==strs.size()){
                ans.insert(ans.begin()+j, tmp[j]);
            }else{
                break;
            }
        }
        string answer(ans.begin(), ans.end());
        return answer;
    }
};
