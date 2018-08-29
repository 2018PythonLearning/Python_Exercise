class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0)
		{
			return 0;
		}
		vector<int> right;
		vector<int> left;
		int buy = INT_MAX;
		int max = INT_MIN;
		for (int i = 0; i < prices.size(); i++)
		{
			if (buy > prices[i])
			{
				buy = prices[i];
				if (max >= 0)
				{
					left.push_back(max);
				}
				else
				{
					left.push_back(0);
				}
			}
			else
			{
				if (max < prices[i] - buy)
				{
					max = prices[i] - buy;
				}
				left.push_back(max);
			}
		}
		int sell = INT_MIN;
		max = INT_MIN;
		for (int i = prices.size() - 1; i >= 0; i--)
		{
			if (sell < prices[i])
			{
				sell = prices[i];
				right.push_back(0);
			}
			else
			{
				if (max < sell - prices[i])
				{
					max = sell - prices[i];
				}
				right.push_back(max);
			}
		}
		max = INT_MIN;
		for (int i = 0; i < left.size(); i++)
		{
			if (max < left[i] + right[left.size() - i - 1])
			{
				max = left[i] + right[left.size() - i - 1];
			}
		}
		return max;
	}
};