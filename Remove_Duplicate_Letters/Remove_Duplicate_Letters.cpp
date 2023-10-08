class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> mp(26);
        unordered_map<char, int> visited(26);
        string ans = "0";
        for(char c:s){
            mp[c]++;
        }
        for(char c:s){
            // cout<<ans<<endl;
            mp[c]--;
            if(visited[c]) continue;
            while(c<ans.back() && mp[ans.back()]){
                visited[ans.back()] = 0;
                ans.pop_back();
            }
            ans += c;
            visited[c] = 1;
        }
        return ans.substr(1);
    }
};
