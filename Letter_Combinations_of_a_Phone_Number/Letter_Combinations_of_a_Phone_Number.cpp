class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> Map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"}, 
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> ans;
        string str;
        for(int i=0;i!=digits.length();i++){
            str = Map[digits[i]];
            if(ans.empty()){
                for(int j=0;j!=str.length();j++){
                    string tmp(1, str[j]);      //char to string
                    ans.push_back(tmp);
                }
            }else{
                int len = ans.size();       //下面迴圈會更改ans的size，所以要先確定長度，否則會顯入無窮迴圈
                for(int k=0;k!=len;k++){
                    for(int y=0;y!=str.length();y++){
                        ans.push_back(ans[0]+str[y]);
                    }
                    ans.erase(ans.begin());
                }
            }
        }
        
        return ans;
    }
};
