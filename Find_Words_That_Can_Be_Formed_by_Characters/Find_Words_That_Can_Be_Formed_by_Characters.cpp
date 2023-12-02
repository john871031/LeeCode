class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        int len = chars.size();
        int ans = 0;
        for(int i=0;i<len;i++){
            mp[chars[i]]++;
        }
        for(int i=0;i<words.size();i++){
            unordered_map<char, int> tmp = mp;
            bool check = true;
            for(char w:words[i]){
                if(tmp[w]>0) tmp[w]--;
                else{
                    check = false;
                    break;
                }
            }
            if(check) ans += words[i].size();
        }
        return ans;
    }
};
