class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int m = INT_MAX;
        int profit = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<m)
                m = prices[i];
            
            profit = max(profit, prices[i]-m);
            
            
        }
        
        return profit;
        
    }
};

// Naive : Sort()
// BF : 2 for loops