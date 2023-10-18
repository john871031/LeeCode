class Solution {
public:
    string decodeString(string s) {
        int len = s.size();
        int count = 0;
        vector<string> s_sub;
        vector<int> s_time;
        string tmp = "";
        // string ans = "";
        for(int i=0;i<len;i++){
            if(isdigit(s[i])){
                count = 10*count + s[i]-'0';
            }else if(s[i]=='['){
                s_time.push_back(count);
                s_sub.push_back(tmp);
                count = 0;
                tmp = "";
            }else if(s[i]==']'){
                // cout<<s_time.back()<<' '<<tmp<<endl;
                for(int j=0;j<s_time.back();j++){
                    s_sub.back() += tmp;
                }
                // cout<<s_sub.back()<<endl;
                s_time.pop_back();
                tmp = s_sub.back();
                s_sub.pop_back();
            }else{
                tmp += s[i];
            }
        }
        if(s_sub.empty()) return tmp;
        return s_sub.back();
    }
};
