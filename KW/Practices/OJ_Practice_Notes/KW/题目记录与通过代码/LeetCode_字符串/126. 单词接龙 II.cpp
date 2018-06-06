class Solution {
private:
	vector<vector<string>> vs;
	int l;
public:
	void dg(string beginWord, string endWord, vector<string>& wordList, vector<int> a, string s)
	{
		if (beginWord == endWord)
		{
			if (a.size() <= l)
			{
				if (a.size() < l)
				{
					l = a.size();
					vs.clear();
				}
				vector<string> v;
				v.push_back(s);
				for (int i = 0; i < a.size(); i++)
				{
					v.push_back(wordList[a[i]]);
				}
				vs.push_back(v);
			}


		}
		for (int x = 0; x < wordList.size(); x++)
		{

			bool b = true;
			for (int i = 0; i < a.size(); i++)
			{
				if (x == a[i])
				{
					b = false;
					break;
				}
			}
			if (b == true)
			{
				int bt = 0;
				for (int y = 0; y < beginWord.size(); y++)
				{
					if (beginWord[y] != wordList[x][y])
					{
						bt++;
						if (bt > 1)
						{
							break;
						}
					}
				}
				if (bt == 1)
				{
					a.push_back(x);
					dg(wordList[x], endWord, wordList, a, s);
					a.pop_back();
				}
			}
		}
	}
	vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
		l = 2147483647;
		for (int i = 0; i < wordList.size(); i++)
		{
			if (wordList[i] == endWord)
			{
				break;
			}
			else if (i == wordList.size() - 1)
			{
				return vs;
			}
		}
		vector<int> i;
		dg(beginWord, endWord, wordList, i, beginWord);
		return vs;
	}
};