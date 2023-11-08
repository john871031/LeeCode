class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int w1 = word1.size();
        int w2 = word2.size();
        int i = 0;
        int j = 0;
        while(i<w1 && j<w2){
            ans = ans + word1[i++]+word2[j++];
        }
        if(i<w1) ans += word1.substr(i, w1-i);
        if(j<w2) ans += word2.substr(j, w2-j);
        return ans;
    }
};
