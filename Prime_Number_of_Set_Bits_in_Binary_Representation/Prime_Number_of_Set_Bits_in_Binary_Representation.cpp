class Solution {
public:
    int isPrime(int num){
        if(num==1) return 0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0) return 0;
        }
        return 1;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i=left;i<=right;i++){
            bitset<20> num(i);
            if(isPrime(num.count())) ans += 1;
        }
        return ans;
    }
};
