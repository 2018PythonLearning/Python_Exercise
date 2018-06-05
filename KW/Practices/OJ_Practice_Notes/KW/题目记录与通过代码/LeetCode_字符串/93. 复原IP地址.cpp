class Solution {
private:
	vector<string> vs;
public:
	void dg(string s, int i, int n, string str)
	{
		cout << str << " ";
		if (s.size() - i >= n && s.size() - i <= 3 * n)
		{
			string str1 = "";
			if (n == 1 && (s.size() - i == 1 || s[i] != '0'))
			{
				for (int z = 0; z < s.size() - i; z++)
				{
					str1 += s[z + i];
				}
				stringstream ss;
				ss << str1;
				int z;
				ss >> z;
				if (z < 256)
				{
					vs.push_back(str + str1);
				}
			}
			else
			{
				if (s[i] == '0')
				{
					dg(s, i + 1, n - 1, str + (str1 += s[i]) + '.');
				}
				else
				{
					dg(s, i + 1, n - 1, str + (str1 += s[i]) + '.');
					dg(s, i + 2, n - 1, str + (str1 += s[i + 1]) + '.');
					stringstream ss;
					str1 += s[i + 2];
					ss << str1;
					int z;
					ss >> z;
					if (z < 256)
					{
						dg(s, i + 3, n - 1, str + str1 + '.');
					}
				}

			}

		}
	}
	vector<string> restoreIpAddresses(string s) {
		dg(s, 0, 4, "");
		return vs;

	}
};