class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1e9;

        while(left<right){
            int mid = (left+right)/2;
            int cnt = 0;
            for(int p:piles) cnt += (p+mid-1)/mid;
            if(cnt>h){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return right;
    }
};
