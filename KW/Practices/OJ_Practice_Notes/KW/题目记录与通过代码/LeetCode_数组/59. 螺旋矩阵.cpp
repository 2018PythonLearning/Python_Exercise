class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> vvi(n, vector<int>(n));
		int a = n - 1;  //向下结束位置
		int b = n - 1;  //向右结束位置
		int c = 0; //向左结束位置
		int d = 1; //向上结束位置
		int num = 1; //需要生成的当前元素
		vvi[0][0] = num;
		num++;
		int z = 1; //方向
		int x = 0;
		int y = 0;
		for (int i = 1; i < n * n; i++)
		{
			if (z == 1) //向右
			{
				y++;
				vvi[x][y] = num;
				num++;
				if (y == b)
				{
					z = 2;
				}
			}
			else if (z == 2)  //向下
			{
				x++;
				vvi[x][y] = num;
				num++;
				if (x == a)
				{
					z = 3;
				}
			}
			else if (z == 3)  //向左
			{
				y--;
				vvi[x][y] = num;
				num++;
				if (y == c)
				{
					z = 4;
				}
			}
			else if (z == 4)  //向上
			{
				x--;
				vvi[x][y] = num;
				num++;
				if (x == d)
				{
					z = 1;
					a--;
					b--;
					c++;
					d++;
				}
			}
		}
		return vvi;
	}
};