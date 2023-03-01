class Solution {
public:
    string convertToBase7(int num) {
        int sign = 1;
        int remainder;
        string ans;
        if(num<0){
            sign = -1;
            num = -1*num;
        }else if(num==0){
            ans.push_back('0');
        }
        while(num>0){
            remainder = num%7;
            num /= 7; 
            ans.push_back('0'+remainder);
        }
        if(sign==-1) ans.push_back('-');;
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
