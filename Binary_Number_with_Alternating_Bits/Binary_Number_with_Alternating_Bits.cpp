class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==1) return true;
        int first = n%2;
        n /= 2;
        while(n!=0){
            int second = n%2;
            if(first==second) return false;
            first = second;
            n /= 2;
        }
        
        return true;
    }
};
