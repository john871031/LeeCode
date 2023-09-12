class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int k = s.size();
        vector<int> dis(k, 0);
        int cur = -k;
        for(int i=0;i<s.size();i++){
            if(s[i]==c) cur = i;
            dis[i] = i - cur;
        }

        for(int i=k-1;i>=0;i--){
            if(s[i]==c) cur = i;
            dis[i] = min(abs(i-cur), dis[i]);
        }
        return dis;
    }
};
