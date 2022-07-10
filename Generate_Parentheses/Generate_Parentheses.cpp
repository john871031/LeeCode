class Solution {
public:
    void generate(vector<string>& ans, string str,int left,int right, int n){
        if(str.length()==2*n){
            ans.push_back(str);
            return;
        }
        
        if(left<n) generate(ans, str+'(', left+1, right, n);
        if(right<left) generate(ans, str+')', left, right+1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        
        generate(ans, str, 0, 0, n);
        return ans;
    }
};
