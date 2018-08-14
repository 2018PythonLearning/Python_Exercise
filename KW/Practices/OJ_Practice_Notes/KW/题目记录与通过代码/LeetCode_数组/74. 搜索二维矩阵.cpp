class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		if (matrix.size() == 0 || matrix[0].size() == 0)
		{
			return false;
		}
		int l = 0;
		int r = matrix.size() - 1;
		int m = 0;
		int n = 0;
		while (1)
		{
			m = (r - l) / 2 + l;
			if (target >= matrix[l][0] && target <= matrix[l][matrix[0].size() - 1])
			{
				n = l;
				break;
			}
			else if (target >= matrix[r][0] && target <= matrix[r][matrix[0].size() - 1])
			{
				n = r;
				break;
			}
			else if (target >= matrix[m][0] && target <= matrix[m][matrix[0].size() - 1])
			{
				n = m;
				break;
			}
			else if (l + 1 == r || l == r)
			{
				return false;
			}
			else if (target > matrix[m][0])
			{
				l = m;
			}
			else if (target < matrix[m][0])
			{
				r = m;
			}

		}
		l = 0;
		r = matrix[0].size() - 1;
		m = 0;

		while (1)
		{
			m = (r - l) / 2 + l;
			cout << l << " " << r << "\n";
			if (target == matrix[n][l] || target == matrix[n][r] || target == matrix[n][m])
			{
				return true;
			}
			else if (l + 1 == r || l == r)
			{
				return false;
			}
			else if (target > matrix[n][m])
			{
				l = m;
			}
			else if (target < matrix[n][m])
			{
				r = m;
			}

		}

	}
};