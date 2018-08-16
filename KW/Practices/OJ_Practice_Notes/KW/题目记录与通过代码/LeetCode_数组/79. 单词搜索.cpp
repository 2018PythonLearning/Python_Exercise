class Solution {
public:
	bool dg(vector<vector<char>> board, string& word, int n, int x, int y)
	{
		if (n == word.size())
		{
			return true;
		}
		if (y + 1 < board[0].size() && board[x][y + 1] == word[n]) //向右
		{

			char c = board[x][y + 1];
			board[x][y + 1] = '0';
			if (dg(board, word, n + 1, x, y + 1))
			{
				return true;
			}
			board[x][y + 1] = c;
		}
		if (x + 1 < board.size() && board[x + 1][y] == word[n]) //向下
		{
			char c = board[x + 1][y];
			board[x + 1][y] = '0';
			if (dg(board, word, n + 1, x + 1, y))
			{
				return true;
			}
			board[x + 1][y] = c;
		}
		if (y - 1 >= 0 && board[x][y - 1] == word[n]) //向左
		{
			char c = board[x][y - 1];
			board[x][y - 1] = '0';
			if (dg(board, word, n + 1, x, y - 1))
			{
				return true;
			}
			board[x][y - 1] = c;
		}
		if (x - 1 >= 0 && board[x - 1][y] == word[n]) //向上
		{
			char c = board[x - 1][y];
			board[x - 1][y] = '0';
			if (dg(board, word, n + 1, x - 1, y))
			{
				return true;
			}
			board[x - 1][y] = c;
		}
		return false;

	}
	bool exist(vector<vector<char>>& board, string word) {
		for (int x = 0; x < board.size(); x++)
		{
			for (int y = 0; y < board[0].size(); y++)
			{
				if (board[x][y] == word[0])
				{
					char c = board[x][y];
					board[x][y] = '0';
					if (dg(board, word, 1, x, y))
						return true;
					board[x][y] = c;
				}
			}
		}
		return false;
	}
};