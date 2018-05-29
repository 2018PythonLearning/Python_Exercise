class Solution {
private:
	vector<int> v;
public:
	void dg(string s, vector<string>& words, int x, vector<int> y, int c, int z) //x存储匹配后的坐标，y存储还未匹配的，z存储还剩多少没有匹配
	{                                                                            //c存储刚刚匹配的
		if (c != -1)
		{
			y[c] = -1;
		}
		if (z == 0)
		{
			int m = 0;
			for (int i = 0; i < words.size(); i++)
			{
				m += words[i].size();
			}
			v.push_back(x - m);
		}
		else if (z == words.size())
		{
			for (int n = 0; n < words.size(); n++)
			{
				for (int i = 0; i != -1;)
				{
					i = s.find(words[n], i);
					if (i != -1)
					{
						dg(s, words, i + words[n].size(), y, n, z - 1);
						i++;
					}

				}
			}
		}
		else if (z > 0)
		{
			for (int n = 0; n < words.size(); n++)
			{
				if (y[n] != -1)
				{
					string str = s.substr(x, words[y[n]].size());
					if (str == words[y[n]])
					{
						dg(s, words, x + words[n].size(), y, n, z - 1);
					}
				}
			}
		}
	}
	vector<int> findSubstring(string s, vector<string>& words) {
		if (words.size() == 0 || s.size() == 0)
		{
			vector<int> i;
			return i;
		}
		vector<int> y;
		vector<int> e;
		bool b = false;
		for (int i = 0; i < words.size(); i++)
		{
			y.push_back(i);
		}
		dg(s, words, 0, y, -1, words.size());
		for (int i = 0; i < v.size(); i++)
		{
			for (int n = 0; e.size() != 0 && n < e.size(); n++)
			{
				if (v[i] == e[n])
				{
					b = true;
					break;
				}
			}
			if (b == false)
			{
				e.push_back(v[i]);
			}
			b = false;
		}
		return e;
	}
};