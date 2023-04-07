class Solution {
public:
    vector<vector<string>> ans;
    bool IsPalindrome(string s, int start, int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    void rec(string s, vector<string> &tmp, int index){
        if(index==s.size()){
            // cout<<tmp<<endl;
            ans.push_back(tmp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(IsPalindrome(s, index, i)){
                // cout<<index<<' '<<i<<endl;
                // cout<<IsPalindrome(s, index, i)<<endl;
                tmp.push_back(s.substr(index,i-index+1));
                rec(s, tmp, i+1);
                tmp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> tmp;
        rec(s, tmp, 0);
        return ans;
    }
}; 
