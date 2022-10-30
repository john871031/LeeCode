class Solution {
public:
    string toHex(int num) {
        string ans;
        unsigned int num1 = num;
        char reflect[20] = "0123456789abcdef";
        
        do{
            ans += reflect[num1%16];
            num1 /= 16;
        }while(num1);
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};
