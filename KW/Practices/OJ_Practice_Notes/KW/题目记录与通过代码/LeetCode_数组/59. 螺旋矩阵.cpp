class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> vvi(n, vector<int>(n));
		int a = n - 1;  //���½���λ��
		int b = n - 1;  //���ҽ���λ��
		int c = 0; //�������λ��
		int d = 1; //���Ͻ���λ��
		int num = 1; //��Ҫ���ɵĵ�ǰԪ��
		vvi[0][0] = num;
		num++;
		int z = 1; //����
		int x = 0;
		int y = 0;
		for (int i = 1; i < n * n; i++)
		{
			if (z == 1) //����
			{
				y++;
				vvi[x][y] = num;
				num++;
				if (y == b)
				{
					z = 2;
				}
			}
			else if (z == 2)  //����
			{
				x++;
				vvi[x][y] = num;
				num++;
				if (x == a)
				{
					z = 3;
				}
			}
			else if (z == 3)  //����
			{
				y--;
				vvi[x][y] = num;
				num++;
				if (y == c)
				{
					z = 4;
				}
			}
			else if (z == 4)  //����
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