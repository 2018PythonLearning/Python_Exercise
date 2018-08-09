class Solution {
public:
	int uniquePaths(int m, int n) {
		int kn[m][n];
		for (int i = 0; i < n; i++)
		{
			kn[0][i] = 1;
		}
		for (int i = 0; i < m; i++)
		{
			kn[i][0] = 1;
		}

		for (int x = 1; x < m; x++)
		{
			for (int y = 1; y < n; y++)
			{
				kn[x][y] = kn[x - 1][y] + kn[x][y - 1];
			}
		}
		return kn[m - 1][n - 1];
	}
};