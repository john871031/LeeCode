class Solution {
public:
    int findComplement(int num) {
         long ans = 0;
         int i = 0;
         while(num>0){
             if(num%2==0) ans += pow(2, i);
             num /= 2;
             i++;
         }
        return ans;
    }

};
