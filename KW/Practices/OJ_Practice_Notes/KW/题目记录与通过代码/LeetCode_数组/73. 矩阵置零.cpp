²Î¿¼£ºhttps://blog.csdn.net/xygy8860/article/details/46933755
class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		if (matrix[0].size() == 0 || matrix.size() == 0)
		{
			return;
		}
		bool r = false;  //ÐÐ
		bool c = false;  //ÁÐ
		for (int i = 0; i < matrix.size(); i++)
		{
			if (matrix[i][0] == 0)
			{
				c = true;
			}
		}
		for (int i = 0; i < matrix[0].size(); i++)
		{
			if (matrix[0][i] == 0)
			{
				r = true;
			}

		}
		for (int x = 0; x < matrix.size(); x++)
		{
			for (int y = 0; y < matrix[0].size(); y++)
			{
				if (matrix[x][y] == 0)
				{
					matrix[x][0] = 0;
					matrix[0][y] = 0;
				}
			}
		}
		for (int i = 1; i < matrix.size(); i++)
		{
			if (matrix[i][0] == 0)
			{
				for (int x = 1; x < matrix[0].size(); x++)
				{
					matrix[i][x] = 0;
				}
			}
		}
		for (int i = 1; i < matrix[0].size(); i++)
		{
			if (matrix[0][i] == 0)
			{
				for (int x = 1; x < matrix.size(); x++)
				{
					matrix[x][i] = 0;
				}
			}
		}

		if (c)
		{
			for (int x = 0; x < matrix.size(); x++)
			{
				matrix[x][0] = 0;
			}
		}

		if (r)
		{
			for (int x = 0; x < matrix[0].size(); x++)
			{
				matrix[0][x] = 0;
			}
		}
	}
};