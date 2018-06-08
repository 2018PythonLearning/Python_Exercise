class Solution {
public:
	string reverseVowels(string s) {
		string str = s;
		string s1 = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			{
				s1 += s[i];
			}
		}
		int n = s1.size() - 1;
		for (int i = 0; i < str.size(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			{
				str[i] = s1[n];
				n--;
			}
		}
		return str;
	}
};