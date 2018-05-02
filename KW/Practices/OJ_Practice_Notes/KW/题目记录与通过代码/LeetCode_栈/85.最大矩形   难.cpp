//https://blog.csdn.net/MebiuW/article/details/51571148



class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		//https://blog.csdn.net/jingsuwen1/article/details/51577983
		if (heights.empty())
		{
			return 0;
		}
		int count = 0;
		int max = 0;
		stack<int> a;
		a.push(heights[0]);
		for (int i = 1; i < heights.size(); i++)
		{
			if (heights[i] >= a.top())
			{
				a.push(heights[i]);

			}
			else
			{
				while (!a.empty() && heights[i] < a.top())
				{
					count++;
					if (a.top() * count > max)
					{
						max = a.top() * count;
					}
					a.pop();
				}
				while (count > 0)
				{
					a.push(heights[i]);
					count--;
				}
				a.push(heights[i]);
			}

		}
		count++;
		while (!a.empty())
		{
			if (a.top() * count > max)
			{
				max = a.top() * count;
			}
			count++;
			a.pop();
		}

		return max;
	}

	int maximalRectangle(vector<vector<char>>& matrix) {
		//https://blog.csdn.net/MebiuW/article/details/51571148
		if (matrix.empty())
		{
			return 0;
		}
		vector<int> a;
		int max = 0;
		for (int i = 0; i < matrix.size(); i++)
		{
			a.push_back(0);
		}
		for (int i = 0; i < matrix[0].size(); i++)
		{
			for (int x = 0; x < matrix.size(); x++)
			{
				for (int y = i; y < matrix[x].size(); y++)
				{
					if (matrix[x][y] == '1')
					{
						a[x]++;
					}
					else
					{
						break;
					}
				}
			}
			max = largestRectangleArea(a) > max ? largestRectangleArea(a) : max;
			for (int i = 0; i < a.size(); i++)
			{
				a[i] = 0;
			}
		}
		return max;



		//         if(matrix.empty())
		//         {
		//             return 0;
		//         }
		//         for(int i = 0; i < matrix.size(); i++)
		//         {
		//             for(int n = 0; n < matrix[i].size(); n++)
		//             {
		//                 cout << matrix[i][n]<< " ";
		//             }
		//             cout << "\n";
		//         }
		//         vector<int> g;
		//         int z = 1;
		//         int x = 0;
		//         int max = 0;
		//         for(int i = 0; i < matrix[0].size(); i++)
		//         {
		//             g.push_back(0);
		//         }
		//         for(int n = 0; n < matrix[0].size(); n++)
		//         {
		//             for(int i = 0; i < matrix.size(); i++)
		//             {

		//                 while(matrix[i][n + g[i]] == '1')
		//                 {
		//                     g[i]++;
		//                     if(n + g[i] > g.size())
		//                     {
		//                         break;
		// //                        cout << "1";
		//                     }
		// //                    if(i == 0 && n == 0)
		// //                        cout << g.size() << " ";
		//                 }
		//             }
		// //            cout << n << matrix[0].size();
		//             for(int i = 0; i < g.size(); i++)
		//             {
		// //                cout << g[i];
		//                 x += g[i];
		//                 while(i + z < g.size() && g[i] <= g[i + z])
		//                 {
		//                     x += g[i];
		//                     z++;
		//                 }
		//                 z = 1;
		//                 while(i - 1 >= 0 && g[i] <= g[i - z])
		//                 {
		//                     x += g[i];
		//                     z++;
		//                 }
		//                 z = 1;
		//                 if(x > max)
		//                 {
		//                     max = x;
		//                 }
		// //                cout << x << " " << g[i];
		//                 x = 0;
		//             }
		//             for(int i = 0; i < g.size(); i++)
		//             {
		//                 g[i] = 0;
		//             }
		//         }
		//         return max;
	}
};


