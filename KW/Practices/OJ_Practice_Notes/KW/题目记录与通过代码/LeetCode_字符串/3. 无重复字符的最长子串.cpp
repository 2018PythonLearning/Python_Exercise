class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		deque<char> v;
		int max = 0;
		int count = 0;
		int b = 0;
		for (int i = 0; i < s.size(); i++)
		{
			for (int n = 0; n < v.size(); n++)
			{
				if (v[n] == s[i])
				{
					b = n + 1;
					break;
				}
			}
			if (b == 0)
			{
				v.push_back(s[i]);
				count++;
				if (i == s.size() - 1)
				{
					if (max < count)
					{
						max = count;
					}
				}
			}
			else
			{
				if (max < count)
				{
					max = count;
				}
				count = count - b + 1;
				v.push_back(s[i]);
				while (b)
				{
					v.pop_front();
					b--;
				}

			}
		}
		if (max == 0)
		{
			max = s.size();
		}
		return max;
	}
};