class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX;
        int maxPro = 0;

        for(int i=0; i<prices.size(); i++)
        {
            minVal = min(minVal, prices[i]);
            maxPro = max(maxPro, prices[i]-minVal);
        }
        return maxPro;
    }
};