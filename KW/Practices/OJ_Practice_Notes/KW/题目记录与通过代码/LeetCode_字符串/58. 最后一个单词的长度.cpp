class Solution {
public:
	int lengthOfLastWord(string s) {
		int n = 0;
		bool b = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				b = true;
			}
			else
			{
				if (b == true)
				{
					n = 0;
					b = false;
				}
				n++;
			}

		}
		return n;
	}
};