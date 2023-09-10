class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        unordered_set<string> ban(banned.begin(), banned.end());
        for(int i=0;i<paragraph.size();i++){
            if(ispunct(paragraph[i])) paragraph[i] = ' ';
            else paragraph[i] = tolower(paragraph[i]);
        }
        string tmp;
        stringstream ss(paragraph);
        while(ss >> tmp) mp[tmp]++;
        int max = INT_MIN;
        string ans;
        for(auto s:mp){
            // cout<<s.first<<' '<<s.second<<endl;
            if(s.second>max && !ban.count(s.first)){
                ans = s.first;
                max = s.second;
            }
        }
        return ans;
    }
};
