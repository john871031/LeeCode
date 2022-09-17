uint32_t reverseBits(uint32_t n) {
    int ans=0;
    int num=31;
    while(num){
        ans = (ans+(n&1)) * 2;
        n >>= 1;
        num--;
    }
    ans += n&1;
    return ans;
}
