// You can contribute the starter code

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, temp = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            temp = min(temp, prices[i]);
            ans = max(ans, prices[i] - temp);
        }

        return ans;
    }
};