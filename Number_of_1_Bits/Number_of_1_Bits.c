int hammingWeight(uint32_t n) {
    int num=32;
    int count=0;
    while(num){
        if(n&1){
            count++;
        }
        n >>= 1;
        num--;
    }
    return count;
}
