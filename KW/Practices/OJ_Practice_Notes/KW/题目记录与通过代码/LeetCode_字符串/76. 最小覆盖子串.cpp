class Solution {
public:
	string minWindow(string s, string t) {
		int s1[128] = { 0 };
		int t1[128] = { 0 };
		int ssize = s.size();
		int tsize = t.size();
		int z = 0;
		int l = 0;
		int min[2] = { 0, ssize };
		string str = "";
		bool b = false;
		for (int i = 0; i < tsize; i++)
		{
			t1[t[i]]++;
		}
		for (int i = 0; i < ssize; i++)
		{
			s1[s[i]]++;
			if (s1[s[i]] <= t1[s[i]])
			{
				z++;
			}
			if (z == tsize)
			{
				b = true;
				while (z == tsize)
				{
					cout << "-";
					if (t1[s[l]] == 0)
					{
						s1[s[l]]--;
					}
					else if (s1[s[l]] == t1[s[l]])
					{
						if (i - l < min[1] - min[0])
						{
							min[0] = l;
							min[1] = i;
						}
						s1[s[l]]--;
						z--;
					}
					else if (s1[s[l]] > t1[s[l]])
					{
						s1[s[l]]--;
					}
					l++;
				}
			}
		}
		if (b == true)
		{
			while (min[0] <= min[1])
			{
				str += s[min[0]];
				min[0]++;
			}
		}

		return str;
	}
};