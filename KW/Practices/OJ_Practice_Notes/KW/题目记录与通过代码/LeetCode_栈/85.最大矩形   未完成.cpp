class Solution {
public:
	int maximalRectangle(vector<vector<char>>& matrix) {
		//        vector<vectot<int>> a(matrix.size(), vector<int>(matrix[0].size));
		if (matrix.empty())
		{
			return 0;
		}
		for (int i = 0; i < matrix.size(); i++)
		{
			for (int n = 0; n < matrix[i].size(); n++)
			{
				cout << matrix[i][n] << " ";
			}
			cout << "\n";
		}
		vector<int> g;
		int z = 1;
		int x = 0;
		int max = 0;
		for (int i = 0; i < matrix[0].size(); i++)
		{
			g.push_back(0);
		}
		for (int n = 0; n < matrix[0].size(); n++)
		{
			for (int i = 0; i < matrix.size(); i++)
			{

				while (matrix[i][n + g[i]] == '1')
				{
					g[i]++;
					if (n + g[i] > g.size())
					{
						break;
						//                        cout << "1";
					}
					//                    if(i == 0 && n == 0)
					//                        cout << g.size() << " ";
				}
			}
			//            cout << n << matrix[0].size();
			for (int i = 0; i < g.size(); i++)
			{
				//                cout << g[i];
				x += g[i];
				while (i + z < g.size() && g[i] <= g[i + z])
				{
					x += g[i];
					z++;
				}
				z = 1;
				while (i - 1 >= 0 && g[i] <= g[i - z])
				{
					x += g[i];
					z++;
				}
				z = 1;
				if (x > max)
				{
					max = x;
				}
				//                cout << x << " " << g[i];
				x = 0;
			}
			for (int i = 0; i < g.size(); i++)
			{
				g[i] = 0;
			}
		}
		return max;
	}
};

