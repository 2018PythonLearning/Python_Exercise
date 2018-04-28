class Solution {
public:
	bool isValid(string s) {
		if (s.length() % 2 == 1) {
			return false;
		}

		if (s.length() == 0) {
			return true;
		}

		char ch[100000];
		int n = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				ch[n] = s[i];
				n++;
			}
			else
			{
				switch (s[i])
				{
				case ')':
					if (n - 1 >= 0 && ch[n - 1] == '(')
					{
						n--;
					}
					else
					{
						return false;
					}
					break;
				case '}':
					if (n - 1 >= 0 && ch[n - 1] == '{')
					{
						n--;
					}
					else
					{
						return false;
					}
					break;
				case ']':
					if (n - 1 >= 0 && ch[n - 1] == '[')
					{
						n--;
					}
					else
					{
						return false;
					}
					break;
				}
			}
		}
		if (n != 0)
		{
			return false;
		}
		return true;
	}
};