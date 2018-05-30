class Solution {
public:
	bool match(string s, string p, int i, int n)
	{
		if (s[s.size() - 1] != p[p.size() - 1] && p[p.size() - 1] != '?' && p[p.size() - 1] != '*')
		{
			return false;
		}
		if (i >= s.size() && n >= p.size())
		{
			return true;
		}
		else if (i > s.size() - 1 && n < p.size() && p[n] != '*') //一串字符已读完，一串字符未读完
		{

			return false;
		}
		else if (i < s.size() && n > p.size() - 1) //一串字符已读完，一串字符未读完
		{

			return false;
		}
		else if (p[n] == '?')  //p[n] == '?'
		{
			if (match(s, p, i + 1, n + 1) && s.size() - i != 0)
			{
				return true;
			}
			return false;
		}
		else if (p[n] == '*')
		{
			for (int x = 0; x + i <= s.size(); x++)
			{
				if (match(s, p, x + i, n + 1))
				{
					return true;
				}
			}
		}
		else if (p[n] >= 'a' && p[n] <= 'z') //p[n]是字母
		{
			if (s[i] == p[n] && match(s, p, i + 1, n + 1))
			{
				return true;
			}
			return false;
		}
		return false;
	}
	bool isMatch(string s, string p) {
		return match(s, p, 0, 0);
	}
};