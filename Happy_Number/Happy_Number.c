

bool isHappy(int n){
    
    while(1){
        int tmp = n;
        int ans = 0;
        while(tmp){
            ans += pow(tmp%10, 2);
            tmp /= 10;
        }
        if(ans==1) return true;
        else if(ans==4) return false;
        n = ans;
    }
    return false;
}
