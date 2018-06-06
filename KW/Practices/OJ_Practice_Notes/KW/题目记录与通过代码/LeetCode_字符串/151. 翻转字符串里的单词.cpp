class Solution {
public:
	void reverseWords(string &s) {

		string str = "";
		string str1 = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				if (str.size() == 0 && str1.size() > 0)
				{
					str = str1;
					str1 = "";
				}
				else if (str1.size() > 0)
				{
					str = str1 + ' ' + str;
					str1 = "";
				}
				cout << str1;
			}
			else
			{
				str1 += s[i];
			}
		}
		if (str.size() != 0 && str1.size() > 0)
		{
			str = str1 + ' ' + str;
		}
		else if (str1.size() > 0)
		{
			str = str1;
		}
		cout << s.size();
		s = str;
	}
};