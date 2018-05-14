class Solution {
public:
	int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
		int h[matrix[0].size()];
		int t = 0;
		int max = -2147483648;
		for (int x = 0; x < matrix.size(); x++)
		{
			for (int y = 0; y < matrix[0].size(); y++)
			{
				for (int z = 0; z < matrix.size() - x; z++)
				{
					for (int c = 0; c < matrix[0].size() - y; c++)
					{
						if (c == 0)
						{
							if (z > 0)
							{
								h[c] = h[c] + matrix[x + z][y + c];
							}
							else
							{
								h[c] = matrix[x][y];
							}
							t = matrix[x + z][y + c];
						}
						else
						{
							if (z != 0)
							{
								t = matrix[x + z][y + c] + t;
								h[c] = h[c] + t;
							}
							else
							{
								h[c] = h[c - 1] + matrix[x + z][y + c];
							}

						}
						if (h[c] == k)
						{
							return k;
						}
						if (max < h[c] && h[c] < k)
						{
							max = h[c];
						}
						//cout << h[c] << " ";
					}
					//cout << "\n";
				}
			}
		}
		return max;
	}
};