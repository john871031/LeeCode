class Solution {
public:
    int myAtoi(string s) {
        int neg = 1;
        long ans = 0;
        int i = 0;
        int s_len = s.length();
        while(i<s_len && s[i]==' ') i++;
        if(s[i]=='-'){
            neg = -1;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        while(i<s_len && s[i]<=57 && s[i]>=48){
            int tmp;
            tmp = s[i] - 48;
            ans = ans*10 + tmp;
            if(ans>INT_MAX && neg==1) return INT_MAX;
            else if(ans>INT_MAX && neg!=1) return INT_MIN;
            
            i++;
        }
        if(neg<0) return -ans;
        return ans;
    }
};
