class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }else if(x<0){
            return false;
        }
        int num = -1;
        int tmp = x;
        while(tmp){
            tmp /= 10;
            num++;
        }
        if(num==9 && x%10>2){
            return false;
        }
        int x_rev = 0;
        int x_ori = x;
        while(x_ori){
            x_rev += (x_ori%10) * pow(10, num);
            num--;
            x_ori /= 10;
        }
        if(x == x_rev){
            return true;
        }
        return false;
    }
};
