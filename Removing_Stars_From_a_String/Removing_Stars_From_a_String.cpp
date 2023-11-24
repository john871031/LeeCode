class Solution {
public:
    string removeStars(string s) {
        int len = s.size();
        string ans = "";
        for(int i=0;i<len;i++){
            if(s[i]!='*'){
                ans += s[i];
                // cout<<st.size()<<st.top()<<endl;
            }else{
                ans.pop_back();
                // cout<<st.size()<<st.top()<<endl;
            }
        }
        return ans;
    }
};
