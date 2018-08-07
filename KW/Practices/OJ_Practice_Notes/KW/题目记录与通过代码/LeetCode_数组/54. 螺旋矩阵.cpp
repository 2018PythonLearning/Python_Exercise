class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int> vi;
		if (matrix.size() == 0 || matrix[0].size() == 0)
		{
			return vi;
		}
		if (matrix[0].size() == 1)
		{
			for (int i = 0; i < matrix.size(); i++)
			{
				vi.push_back(matrix[i][0]);
			}
			return vi;
		}
		int a = matrix.size() - 1;  //���½���λ��
		int b = matrix[0].size() - 1;  //���ҽ���λ��
		int c = 0; //�������λ��
		int d = 1; //���Ͻ���λ��

		vi.push_back(matrix[0][0]);
		int z = 1; //����
		int x = 0;
		int y = 0;
		for (int i = 1; i < matrix.size() * matrix[0].size(); i++)
		{
			if (z == 1) //����
			{
				y++;
				vi.push_back(matrix[x][y]);
				if (y == b)
				{
					z = 2;
				}
			}
			else if (z == 2)  //����
			{
				x++;
				vi.push_back(matrix[x][y]);
				if (x == a)
				{
					z = 3;
				}
			}
			else if (z == 3)  //����
			{
				y--;
				vi.push_back(matrix[x][y]);
				if (y == c)
				{
					z = 4;
				}
			}
			else if (z == 4)  //����
			{
				x--;
				vi.push_back(matrix[x][y]);
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
		return vi;
	}
};