class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len==1) return 0;
        int max=0;
        int tmp;
        int cheap = prices[0];
        for(int i=1;i<len;i++){
            if(prices[i]>cheap){
                tmp = prices[i] - cheap;
                if(tmp>max) max = tmp;
            }else{
                cheap = prices[i];
            }
        }
        return max;
    }
};
