class Solution {
public:
	void get_next(string s, int next[])
	{
		int i = 0;
		next[0] = -1;
		int j = -1;
		while (i < s.size())
		{
			if (j == -1 || s[i] == s[j])
			{
				i++;
				j++;
				if (s[i] != s[j])
				{
					next[i] = j;
				}
				else
				{
					next[i] = next[j];
				}
			}
			else
			{
				j = next[j];
			}
		}
	}
	int strStr(string haystack, string needle) {
		if (needle.size() == 0)
		{
			return 0;
		}
		int next[needle.size()];
		get_next(needle, next);
		int i = 0;
		int j = 0;
		while (i < haystack.size() && (j == -1 || j < needle.size()))
		{
			if (j == -1 || needle[j] == haystack[i])
			{
				++i;
				++j;
			}
			else
			{
				j = next[j];
			}
		}
		if (j == needle.size())
		{
			cout << i << j;
			return i - j;
		}

		return -1;
	}
};