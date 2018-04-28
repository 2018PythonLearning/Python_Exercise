class Solution {
public:
	int trap(vector<int>& height) {
		vector<int> a;
		vector<int> b;
		int n = 0;
		int t = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < height.size(); i++)
		{
			if (a.size() && a[0] <= height[i])
			{
				while (a.size() > 1)
				{
					n += a[a.size() - 1];
					a.pop_back();
					t++;
				}
				x += a[0] * t - n;
				t = 0;
				n = 0;
				a.pop_back();
			}
			a.push_back(height[i]);
			cout << a.size() << " ";
		}
		while (a.size() > 0)
		{
			b.push_back(a[a.size() - 1]);
			a.pop_back();
		}

		for (int i = 0; i < b.size(); i++)
		{
			if (a.size() && a[0] <= b[i])
			{
				while (a.size() > 1)
				{
					n += a[a.size() - 1];
					a.pop_back();
					t++;
				}
				x += a[0] * t - n;
				t = 0;
				n = 0;
				a.pop_back();
			}
			a.push_back(b[i]);
		}

		return x;
	}
};