class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		vector<int> a;
		int n = 1;
		int max = 0;
		int hesize = heights.size();
		for (int i = 0; i < hesize; i++)
		{
			a.push_back(heights[i]);
			while (n + i < hesize && heights[i] <= heights[n + i])
			{
				a[i] += heights[i];
				n++;
			}
			n = 1;
			while (i - n >= 0 && heights[i] <= heights[i - n])
			{
				a[i] += heights[i];
				n++;
			}
			n = 1;
		}
		for (int i = 0; i < a.size(); i++)
		{
			if (max < a[i])
			{
				max = a[i];
			}
		}
		return max;
	}
};