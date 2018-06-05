class Solution {
public:
	int numDistinct(string s, string t) {
		int dp[s.size() + 1][t.size() + 1] = { 0 };
		for (int i = 0; i <= s.size(); i++)
		{
			dp[i][0] = 1;
		}
		for (int i = 1; i <= t.size(); i++)
		{
			dp[0][i] = 0;
		}
		for (int y = 1; y <= t.size(); y++)
		{
			for (int x = 1; x <= s.size(); x++)
			{
				dp[x][y] = dp[x - 1][y];
				if (s[x - 1] == t[y - 1])
				{
					dp[x][y] += dp[x - 1][y - 1];
				}
			}
		}
		return dp[s.size()][t.size()];
	}
};