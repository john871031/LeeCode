class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int buy = INT_MIN, pre_buy = 0, sell = 0, pre_sell = 0;
        for(int price:prices){
            pre_buy = buy;
            buy = max(pre_sell-price, pre_buy);     //前一次購買的消費與當前的消費 選其中較便宜的
            pre_sell = sell;
            sell = max(pre_buy+price, pre_sell);   
        }
        return sell;
    }
};
