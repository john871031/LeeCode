class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i=1;i<s.size();i++){
            string tmp = s.substr(i,s.size()-i) + s.substr(0, i);
            // cout<<tmp<<' '<<goal<<endl;
            if(tmp==goal) return true;
        }
        return false;
    }
};
