class Solution {
public:
    int countHomogenous(string s) {
        long long tmp = 1;
        long long ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                tmp++;
            }else{
                ans += ((tmp+1)*tmp)/2;
                tmp = 1;
            }
        }
        ans += ((tmp+1)*tmp)/2;
        return ans % (1000000007);
    }
};
