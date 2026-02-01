class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int selling = 0;
        int i = prices.size()-1;

        while(i>=0){
               if(selling < prices[i]){
                selling=prices[i];
               }
               
                profit = max(selling-prices[i],profit);
                i--;
               


           
        }
         return profit;
    }
};