class Solution {
public:
	string longestPalindrome(string s) {
		int size = s.size();
		int a = 1;
		int count = 1;
		int max = 0;
		string lstr = "";
		string str = "";
		for (int i = 0; i < size; i++)
		{
			str = s[i];
			while (i - a >= 0 && i + a < size && s[i - a] == s[i + a])
			{
				str = s[i - a] + str + s[i + a];
				count += 2;
				a++;
			}
			if (max < count)
			{
				max = count;
				lstr = str;
			}
			count = 1;
			a = 1;
			str = "";

			if (s[i] == s[i + 1])
			{
				str = s[i] + str + s[i + 1];
				count = 2;
				while (i - a >= 0 && i + 1 + a < size && s[i - a] == s[i + 1 + a])
				{
					str = s[i - a] + str + s[i + 1 + a];
					count += 2;
					a++;
				}
				if (max < count)
				{
					max = count;
					lstr = str;
				}
				count = 1;
				a = 1;
				str = "";
			}

		}
		return lstr;
	}
};