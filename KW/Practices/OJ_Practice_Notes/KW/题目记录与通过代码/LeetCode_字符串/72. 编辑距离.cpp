class Solution {
public:
	int minDistance(string word1, string word2) {
		int dp[word1.size() + 1][word2.size() + 1] = { 0 };
		for (int i = 0; i <= word1.size(); i++)
		{
			dp[i][0] = i;
		}
		for (int i = 0; i <= word2.size(); i++)
		{
			dp[0][i] = i;
		}
		for (int x = 1; x <= word1.size(); x++)
		{
			for (int y = 1; y <= word2.size(); y++)
			{
				dp[x][y] = word1[x - 1] == word2[y - 1] ? dp[x - 1][y - 1] : dp[x - 1][y - 1] + 1;
				dp[x][y] = dp[x][y] < dp[x - 1][y] + 1 ? dp[x][y] : dp[x - 1][y] + 1;
				dp[x][y] = dp[x][y] < dp[x][y - 1] + 1 ? dp[x][y] : dp[x][y - 1] + 1;
			}
		}
		return dp[word1.size()][word2.size()];
	}
};