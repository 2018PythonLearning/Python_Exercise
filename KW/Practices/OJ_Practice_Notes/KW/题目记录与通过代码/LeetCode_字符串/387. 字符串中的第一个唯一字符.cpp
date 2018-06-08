class Solution {
public:
	int firstUniqChar(string s) {
		int m[26] = { 0 };
		for (int i = 0; i < s.size(); i++)
		{
			m[s[i] - 'a'] += 1;
		}
		for (int x = 0; x < s.size(); x++)
		{
			if (m[s[x] - 'a'] == 1)
			{
				return x;
			}
		}
		return -1;
	}
};