class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        else if(x==1) return 1;
        
        double left=0;
        double right=x; 
        double ans;
        while(((int)right-(int)left)!=0){
            ans = (left+right)/2;
            if((ans*ans)>x){
                right = ans;
            }else if((ans*ans)<x){
                left = ans;
            }else{
                return ans;
            }
        }
        return ans;
    }
};
