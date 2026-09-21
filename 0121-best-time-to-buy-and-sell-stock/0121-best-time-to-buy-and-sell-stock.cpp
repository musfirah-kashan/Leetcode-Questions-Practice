class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int min_price=prices[0];
        // int max_profit=0;
        // for(int price:prices){
        //     int profit= price-min_price;
        //     if (profit>max_profit){
        //         max_profit=profit;
        //     }
        //     if (min_price>price){
        //         min_price=price;
        //     }
        // }
        // return max_profit;

        int maxprofit=0;
        int bestbuy=prices[0];
        int n=prices.size();
        for(int i=1; i<n; i++){
            if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit;
    }
};