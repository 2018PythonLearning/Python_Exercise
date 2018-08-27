class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		vector<int> vi;
		vi.push_back(triangle[0][0]);
		for (int i = 1; i < triangle.size(); i++)
		{
			vi.push_back(vi[vi.size() - 1] + triangle[i][triangle[i].size() - 1]);

			for (int x = triangle[i].size() - 2; x > 0; x--)
			{

				if (vi[x] < vi[x - 1])
				{
					vi[x] = vi[x] + triangle[i][x];
				}
				else
				{
					vi[x] = vi[x - 1] + triangle[i][x];
				}
			}
			vi[0] = vi[0] + triangle[i][0];
			for (int i = 0; i < vi.size(); i++)
			{
				cout << vi[i] << " ";
			}
			cout << "\n";
		}
		int min = 2147483647;

		for (int i = 0; i < vi.size(); i++)
		{
			if (min > vi[i])
			{
				min = vi[i];
			}
		}
		return min;
	}
};