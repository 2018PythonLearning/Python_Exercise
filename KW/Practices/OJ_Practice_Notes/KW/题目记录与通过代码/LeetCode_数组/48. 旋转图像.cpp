�����ϵ���һ�ֽⷨ��https://blog.csdn.net/regemc/article/details/79964361
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int z = 0;
		for (int i = 0; i < matrix.size(); i++)
		{
			int x = i;  //x����
			int y = i;  //y����
			int a = matrix.size() - i * 2;  //ÿ���ߵĳ���
			int x1 = x;
			int y1 = y + a - 1;

			for (int c = 0; c < a; c++)  //��ת��
			{
				z = matrix[x1 + c][y1];
				matrix[x1 + c][y1] = matrix[x][y + c];
				matrix[x][y + c] = z;
			}
			x1 += a - 1;
			for (int c = 0; c < a; c++)  //��ת��
			{
				z = matrix[x1][y1 - c];
				matrix[x1][y1 - c] = matrix[x][y + c];
				matrix[x][y + c] = z;
			}
			y1 -= a - 1;
			for (int c = 0; c < a; c++)  //��ת��
			{
				z = matrix[x1 - c][y1];
				matrix[x1 - c][y1] = matrix[x][y + c];
				matrix[x][y + c] = z;
			}
		}
		int x = 0;
		int y = matrix.size() - 1;
		while (x < y)
		{
			z = matrix[x][y];
			matrix[x][y] = matrix[y][x];
			matrix[y][x] = z;
			x++;
			y--;
		}
	}
};