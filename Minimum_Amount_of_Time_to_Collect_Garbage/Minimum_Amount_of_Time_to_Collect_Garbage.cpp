class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int last_P = -1, last_G = -1, last_M = -1;
        int len = garbage.size();
        vector<int> p(len, 0), g(len, 0), m(len, 0);
        int ans = 0;
        for(int i=0;i<len;i++){
            for(char c: garbage[i]){
                if(c=='P'){
                    p[i]++;
                    last_P = i;
                }else if(c=='G'){
                    g[i]++;
                    last_G = i;
                }else{
                    m[i]++;
                    last_M = i;
                }
            }
        }
        if(last_P!=-1) ans += p[0];
        if(last_G!=-1) ans += g[0];
        if(last_M!=-1) ans += m[0];
        for(int i=1;i<=last_P;i++){
            ans += p[i]+travel[i-1];
        }
        for(int i=1;i<=last_G;i++){
            ans += g[i]+travel[i-1];
        }
        for(int i=1;i<=last_M;i++){
            ans += m[i]+travel[i-1];
        }
        return ans;
    }
};
