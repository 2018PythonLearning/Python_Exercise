class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1)
		{
			return s;
		}
		int x = 0;
		int y = 0;
		int n = numRows * 2 - 2;
		string str = "";
		for (y = 0; y / 2 < numRows; y += 2)
		{
			x = y / 2;
			if (y / 2 == numRows - 1)
			{
				while (x < s.size())
				{
					str += s[x];
					x = x + n;
					if (y != 0 && y / 2 != numRows && x < s.size())
					{
						str += s[x];
						x = x + y;
					}
				}
			}
			while (x < s.size())
			{
				str += s[x];
				x = x + n - y;
				if (y != 0 && y / 2 != numRows && x < s.size())
				{
					str += s[x];
					x = x + y;
				}
			}


		}
		return str;

	}
};