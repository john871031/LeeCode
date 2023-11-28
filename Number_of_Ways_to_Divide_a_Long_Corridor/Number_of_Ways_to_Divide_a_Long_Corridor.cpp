class Solution {
public:
    int numberOfWays(string corridor) {
        int ans = 1;
        int M = 1e9+7;
        int len = corridor.size();
        int tmp = 0;
        int last = -1;
        int count = 0;
        vector<int> v;
        for(int i=0;i<len;i++){
            if(corridor[i]=='S'){
                tmp++;
                count++;
                if(tmp==2) last = i;
                if(tmp>2){
                    tmp = 1;
                    v.push_back(i-last);
                }
            }
        }
        if(count%2==1 || count==0) return 0;
        v.push_back(1);

        for(int i=0;i<v.size();i++){
            ans = ((long)ans*v[i])%M;
        }
        return ans;
    }
};
