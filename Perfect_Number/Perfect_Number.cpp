class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 0;
        int i = 1;
        while(i<num){
            if(num%i==0) {
                // cout<<i<<endl;
                ans += i;
            }
            if(ans>num) return false;
            i++;
        }
        // cout<<ans<<endl;
        if(ans==num) return true;
        return false;
    }
};
