class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int pre = 0;
        for(int i=0;i<flowerbed.size()-1;i++){
            if(pre==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                count += 1;
                flowerbed[i] = 1;
            }
            pre = flowerbed[i];
        }
        if(pre==0 && flowerbed[flowerbed.size()-1]==0) count+=1;
        if(count>=n) return true;
        return false;
    }
};
