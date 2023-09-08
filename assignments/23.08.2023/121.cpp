class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int temp=prices[i]-bp;
            profit=max(profit,temp);
            bp=min(bp,prices[i]);
        }
        return profit;
    }
};