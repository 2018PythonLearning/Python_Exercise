class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		vector<int> v;
		int n = 0;
		int size = temperatures.size();
		for (int i = 0; i < size - 1; i++)
		{
			for (n = 1; temperatures[i + n] <= temperatures[i]; n++)
			{
				if (n + i + 1 == size)
				{
					n = 0;
					break;
				}
			}
			v.push_back(n);

		}
		v.push_back(0);
		return v;
	}
};