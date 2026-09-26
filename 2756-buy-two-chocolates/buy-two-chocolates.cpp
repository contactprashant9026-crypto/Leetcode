class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        int smallest = INT_MAX;
        int secsmallest = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<smallest){
                secsmallest = smallest;
                smallest = prices[i];
            }
            else if(prices[i]< secsmallest){
                secsmallest = prices[i];
            }
        }

        int cost = smallest + secsmallest ;

        if(cost <= money){
            return money-cost ;

        }
        else return money;
    }
};