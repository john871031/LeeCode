class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> Map;
        int len=0;
        int rec=0;
        int s_len=s.length();
        for(int i=0;i<s_len;i++){
            if(Map.find(s[i])==Map.end()){
                Map[s[i]] = i;
            }else{
                len = max(len, i-rec);
                if(Map[s[i]] >= rec){
                    rec = Map[s[i]] + 1;
                }
                Map[s[i]] = i;
            }
        }
        len = max(len, s_len-rec);
        return len;
    }
};
