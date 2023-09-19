class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size() || s.size()==1) return false;
        if(s==goal){
            vector<int> num(26,0);
            for(int i=0;i<s.size();i++){
                num[s[i]-'a']++;
                if(num[s[i]-'a']>1) return true;
            }
        }
        vector<int> index;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]) index.push_back(i);
        }
        if(index.size()!=2) return false;
        swap(s[index[0]], s[index[1]]);
        return s==goal;
    }
};
