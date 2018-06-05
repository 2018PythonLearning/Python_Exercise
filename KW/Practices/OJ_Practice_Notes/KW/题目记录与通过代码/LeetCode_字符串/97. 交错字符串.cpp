class Solution {
public:
	bool isInterleave(string s1, string s2, string s3) {
		if (s1.size() == 0 && s2.size() == 0 && s3.size() == 0)
		{
			return 1;
		}
		if (s3.size() != s1.size() + s2.size())
		{
			return 0;
		}
		int dp[s1.size() + 1][s2.size() + 1] = { 0 };
		for (int i = 1; i < s1.size() + 1 && s3[i - 1] == s1[i - 1]; i++)
		{
			dp[i][0] = 1;
		}
		for (int i = 1; i < s2.size() + 1 && s3[i - 1] == s2[i - 1]; i++)
		{
			dp[0][i] = 1;
		}
		for (int x = 1; x <= s1.size(); x++)
		{
			for (int y = 1; y <= s2.size(); y++)
			{
				if (s1[x - 1] == s3[x + y - 1] && dp[x - 1][y] == 1)
				{
					dp[x][y] = 1;
				}
				else if (s2[y - 1] == s3[x + y - 1] && dp[x][y - 1] == 1)
				{
					dp[x][y] = 1;
				}
			}
		}
		return dp[s1.size()][s2.size()];
	}
};