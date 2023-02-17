class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> bsx(x);
        bitset<32> bsy(y);
        int count = 0;
        for(int i=0;i<32;i++){
            if(bsx[i]!=bsy[i]) count++; 
        }
        return count;
    }
};
