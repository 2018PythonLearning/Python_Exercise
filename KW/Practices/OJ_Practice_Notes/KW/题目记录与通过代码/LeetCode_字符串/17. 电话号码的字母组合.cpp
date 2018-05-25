class Solution {
private:
	vector<string> s;
	string st[8] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
public:
	void dg(string digits, string str, int n)
	{
		if (n == digits.size() - 1)
		{
			for (int i = 0; i < st[digits[n] - '2'].size(); i++)
			{
				s.push_back(str + st[digits[n] - '2'][i]);
			}
		}
		else
		{
			for (int i = 0; i < st[digits[n] - '2'].size(); i++)
			{
				dg(digits, str + st[digits[n] - '2'][i], n + 1);
			}

		}
	}
	vector<string> letterCombinations(string digits) {
		if (digits.size() == 0)
		{
			return s;
		}
		dg(digits, "", 0);
		return s;
	}
};