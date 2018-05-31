class Solution {
public:
	bool isNumber(string s) {
		if (s.size() == 1)
		{
			if (s[0] < '0' && s[0] > '9')
			{
				return false;
			}
		}
		int d = 0;
		int kg = -1;
		int e = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (kg == -2 && s[i] != ' ') //非开头结尾使用空格
			{
				return false;
			}
			if (s[i] == '.')//小数点两边得有一个是数字
			{
				d++;
				if (e > 0)
				{
					return false;
				}
				if (d > 1)
				{
					return false;
				}
				if ((s[i + 1] >= '0' && s[i + 1] <= '9') || (s[i - 1] >= '0' && s[i - 1] <= '9'))
				{
				}
				else
				{
					return false;
				}

			}
			else if (s[i] == ' ') //非开头结尾使用空格
			{
				if (i - kg == 1)
				{
					kg = i;
				}
				else
				{
					kg = -2;
				}
				cout << kg;
				if (i == s.size() - 1 && kg != -2)
				{
					cout << "1";
					return false;
				}
			}
			else if (s[i] == 'e')
			{
				e++;
				if (e > 1)
				{
					return false;
				}
				if ((s[i + 1] >= '0' && s[i + 1] <= '9' || s[i + 1] == '+' || s[i + 1] == '-') && ((s[i - 1] >= '0' && s[i - 1] <= '9') || s[i - 1] == '.'))
				{

				}
				else
				{
					cout << "2";
					return false;
				}
			}
			else if (s[i] == '-')
			{
				if ((s[i + 1] >= '0' && s[i + 1] <= '9' || s[i + 1] == '.') && (i - 1 < 0 || s[i - 1] == ' ' || s[i - 1] == 'e' || (s[i - 1] < '0' && s[i - 1] > '9')))
				{

				}
				else
				{
					cout << "3";
					return false;
				}
			}
			else if (s[i] == '+')
			{
				if ((s[i + 1] >= '0' && s[i + 1] <= '9' || s[i + 1] == '.') && (i - 1 < 0 || s[i - 1] == ' ' || s[i - 1] == 'e' || (s[i - 1] < '0' && s[i - 1] > '9')))
				{

				}
				else
				{
					cout << "4";
					return false;
				}
			}
			else if (s[i] < '0' || s[i] > '9')
			{
				return false;
			}
		}
		return true;
	}
};