class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n <= 1)
            return 0;
        
        int i = 0, j = 1;

        int maxProfit = 0;

        while (j < n)
        {
            int currProfit = 0;

            while (j < n && prices[j] > prices[i])
            {
                currProfit = prices[j] - prices[i];
                maxProfit = max(currProfit, maxProfit);
                j++;
            }

            i = j;
            j++;
        }

        return maxProfit;
    }
};
