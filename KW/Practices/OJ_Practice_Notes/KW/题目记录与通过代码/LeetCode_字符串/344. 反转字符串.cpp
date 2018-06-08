class Solution {
public:
	string reverseString(string s) {
		string str = "";
		for (int i = s.size() - 1; i >= 0; i--)
		{
			str += s[i];
		}
		return str;
	}
};