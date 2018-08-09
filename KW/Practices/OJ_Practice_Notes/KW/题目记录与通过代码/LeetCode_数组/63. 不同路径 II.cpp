class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();
		vector<vector<int>> kn(obstacleGrid);
		if (kn[m - 1][n - 1] == 1 || kn[0][0] == 1)
			return 0;
		for (int x = 0; x < m; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (kn[x][y] == 1)
				{
					kn[x][y] = -1;
				}
			}
			cout << "\n";
		}


		for (int i = 0; i < n; i++)
		{
			if (kn[0][i] == -1)
			{
				break;
			}
			kn[0][i] = 1;
		}
		for (int i = 1; i < m; i++)
		{
			if (kn[i][0] == -1)
			{
				break;
			}
			kn[i][0] = 1;
		}

		for (int x = 1; x < m; x++)
		{
			for (int y = 1; y < n; y++)
			{
				if (kn[x - 1][y] == -1 && kn[x][y - 1] == -1)
				{

				}
				else if (kn[x][y] == -1)
				{

				}
				else if (kn[x - 1][y] == -1)
				{
					kn[x][y] = kn[x][y - 1];
				}
				else if (kn[x][y - 1] == -1)
				{
					kn[x][y] = kn[x - 1][y];
				}
				else
				{
					kn[x][y] = kn[x - 1][y] + kn[x][y - 1];
				}
			}
		}


		return kn[m - 1][n - 1];
	}
};