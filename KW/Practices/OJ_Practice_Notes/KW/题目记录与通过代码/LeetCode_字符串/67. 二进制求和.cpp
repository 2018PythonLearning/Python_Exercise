class Solution {
public:
	string addBinary(string a, string b) {
		string str = "";
		string str1 = "";
		string a1 = "";
		string b1 = "";
		int j = 0;
		int i;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			a1 += a[i];
		}
		for (int i = b.size() - 1; i >= 0; i--)
		{
			b1 += b[i];
		}
		cout << a1 << "\n" << b1 << "\n";
		for (i = 0; i < a1.size(); i++)
		{
			if (i == b1.size())
			{
				break;
			}
			if (b1[i] == '1' && a1[i] == '1')
			{
				if (j > 0)
				{
					str += '1';
					j--;
				}
				else
				{
					str += '0';
				}
				j++;
			}
			else if (b1[i] == '1')
			{

				if (j > 0)
				{
					str += '0';
				}
				else
				{
					str += '1';
				}
			}
			else if (a1[i] == '1')
			{
				if (j > 0)
				{
					str += '0';
				}
				else
				{
					str += '1';
				}
			}
			else
			{
				if (j > 0)
				{
					str += '1';
					j--;
				}
				else
				{
					str += '0';
				}
			}
		}
		if (b1.size() > a1.size())
		{
			for (; i < b1.size(); i++)
			{
				if (j > 0)
				{
					if (b1[i] == '1')
					{
						str += '0';
					}
					else
					{
						str += '1';
						j--;
					}
				}
				else
				{
					if (b1[i] == '1')
					{
						str += '1';
					}
					else
					{
						str += '0';
					}
				}
			}
		}
		else if (a1.size() > b1.size())
		{
			for (; i < a1.size(); i++)
			{
				if (j > 0)
				{
					if (a1[i] == '1')
					{
						str += '0';
					}
					else
					{
						str += '1';
						j--;
					}
				}
				else
				{
					if (a1[i] == '1')
					{
						str += '1';
					}
					else
					{
						str += '0';
					}
				}

			}
		}
		if (j > 0)
		{
			str += '1';
		}
		for (int i = str.size() - 1; i >= 0; i--)
		{
			str1 += str[i];
		}
		return str1;
	}
};