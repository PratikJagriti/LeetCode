class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> G(n);
        int max = 0;
        int maxProfit = 0;

        G[n-1] = 0;
        for(int i=n-2; i>=0; i--)
        {
            if(max < prices[i+1])
            {
                max = prices[i+1];
            }
            G[i] = max;
        }

        for(int i=0; i<n-1; i++)
        {
            cout<<G[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<n-1; i++)
        {
            if(maxProfit < G[i] - prices[i])
                maxProfit = G[i] - prices[i];
        }

        return maxProfit;
    }
};