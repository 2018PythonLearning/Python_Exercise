class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		if (grid.size() == 0)
		{
			return 0;
		}
		int q = 0;
		vector<vector<int>> vvi(grid);

		for (int x = 0; x < grid.size(); x++)
		{
			for (int y = 0; y < grid[0].size(); y++)
			{
				if (x == 0 && y == 0)
				{
				}
				else if (x == 0)
				{
					vvi[x][y] = vvi[x][y] + vvi[x][y - 1];
				}
				else if (y == 0)
				{
					vvi[x][y] = vvi[x][y] + vvi[x - 1][y];
				}
				else
				{
					q = vvi[x][y] + vvi[x - 1][y];
					vvi[x][y] = vvi[x][y] + vvi[x][y - 1];
					if (q < vvi[x][y])
					{
						vvi[x][y] = q;
					}
				}
			}
		}
		//         for(int x = 0; x < grid.size(); x++)
		// {
		//     for(int y = 0; y < grid[0].size(); y++)
		//     {
		//         cout << vvi[x][y] << " ";
		//     }
		//     cout << "\n";
		// }
		return vvi[grid.size() - 1][grid[0].size() - 1];
	}
};