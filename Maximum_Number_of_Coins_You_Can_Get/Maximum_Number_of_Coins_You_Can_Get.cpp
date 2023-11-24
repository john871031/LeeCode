class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size()/3;
        int len = piles.size();
        int ans = 0;
        for(int i=len-2;i>=0 && n!=0;i-=2){
            ans += piles[i];
            n--;
        }
        return ans;
    }
};
