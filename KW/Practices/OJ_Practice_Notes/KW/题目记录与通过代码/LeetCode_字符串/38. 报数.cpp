class Solution {
public:
	string countAndSay(int n) {
		if (n == 1)
		{
			return string("1");
		}
		string s = "11";
		string s1 = "";
		string s2;
		stringstream ss;
		int x = 1;
		for (int i = 2; i < n; i++)
		{
			for (int t = 1; t < s.size(); t++)
			{
				if (s[t] == s[t - 1])
				{
					x++;
				}
				else
				{
					ss.clear();
					ss << x;
					ss >> s2;
					s1 += s2;
					s1 += s[t - 1];
					x = 1;
				}
				if (t == s.size() - 1)
				{
					ss.clear();
					ss << x;
					ss >> s2;
					s1 += s2;
					s1 += s[t];
					x = 1;
				}
			}

			s = s1;
			s1 = "";
			cout << s << "\n";
		}
		return s;
	}
};