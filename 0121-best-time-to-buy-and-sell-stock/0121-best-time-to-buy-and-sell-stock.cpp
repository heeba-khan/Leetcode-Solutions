class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=INT_MAX;
        int profit=0;
        for(int p:prices){
            price=min(p,price);
            profit=max(profit,p-price);
        }
        return profit;
    }
};