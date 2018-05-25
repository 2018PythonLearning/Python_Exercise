class Solution {
public:
	int romanToInt(string s) {
		int n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'I')
			{
				if (s[i + 1] == 'V')
				{
					i++;
					n += 4;
				}
				else if (s[i + 1] == 'X')
				{
					i++;
					n += 9;
				}
				else
				{
					n += 1;
				}
			}
			else if (s[i] == 'X')
			{
				if (s[i + 1] == 'L')
				{
					i++;
					n += 40;
				}
				else if (s[i + 1] == 'C')
				{
					i++;
					n += 90;
				}
				else
				{
					n += 10;
				}
			}
			else if (s[i] == 'C')
			{
				if (s[i + 1] == 'D')
				{
					i++;
					n += 400;
				}
				else if (s[i + 1] == 'M')
				{
					i++;
					n += 900;
				}
				else
				{
					n += 100;
				}
			}
			else if (s[i] == 'M')
			{
				n += 1000;
			}
			else if (s[i] == 'V')
			{
				n += 5;
			}
			else if (s[i] == 'L')
			{
				n += 50;
			}
			else if (s[i] == 'D')
			{
				n += 500;
			}
		}
		return n;
	}
};