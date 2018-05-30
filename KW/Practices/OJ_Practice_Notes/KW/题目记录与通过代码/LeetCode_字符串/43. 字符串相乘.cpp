class Solution {
public:
	string multiply(string num1, string num2) {
		if (num1[0] == '0' || num2[0] == '0')
		{
			return string("0");
		}
		int n[221] = { 0 };
		int o, p;
		int i;
		string s = "";
		for (int x = num1.size() - 1; x >= 0; x--)
		{
			for (int y = num2.size() - 1; y >= 0; y--)
			{
				o = num2[y] - '0';
				p = num1[x] - '0';
				n[num1.size() - x - 1 + num2.size() - y - 1] += p * o;
			}
		}
		for (i = 220; i >= 0; i--)
		{
			if (n[i] != 0)
			{
				break;
			}
		}
		for (int t = 0; t <= i; t++)
		{
			n[t + 1] += n[t] / 10;
			n[t] = n[t] % 10;
		}
		if (n[i + 1] != 0)
		{
			s += n[i + 1] + '0';
		}
		for (int t = i; t >= 0; t--)
		{
			s += n[t] + '0';
		}

		return s;


	}
};