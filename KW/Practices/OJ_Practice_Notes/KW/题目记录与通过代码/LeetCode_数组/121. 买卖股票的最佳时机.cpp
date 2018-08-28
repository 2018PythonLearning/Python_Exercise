class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max = 0;
		int min = 2147483647;
		for (int i = 0; i < prices.size(); i++)
		{
			if (min > prices[i])
			{
				min = prices[i];
			}
			else
			{
				if (max < prices[i] - min)
				{
					max = prices[i] - min;
				}
			}
		}
		return max;
	}
};