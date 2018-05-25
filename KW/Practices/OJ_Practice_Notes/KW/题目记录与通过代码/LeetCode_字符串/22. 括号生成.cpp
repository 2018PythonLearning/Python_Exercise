class Solution {
private:
	vector<string> s;
public:
	void dg(int n, int z, int y, string str)
	{
		if (str.size() == n * 2)
		{
			s.push_back(str);
		}
		else
		{
			if (y <= z && z < n)
			{
				dg(n, z + 1, y, str + '(');
				dg(n, z, y + 1, str + ')');
			}
			else if (y < n && y < z)
			{
				dg(n, z, y + 1, str + ')');
			}
		}
	}
	vector<string> generateParenthesis(int n) {
		if (n == 0)
		{
			return s;
		}
		dg(n, 1, 0, "(");
		return s;
	}
};