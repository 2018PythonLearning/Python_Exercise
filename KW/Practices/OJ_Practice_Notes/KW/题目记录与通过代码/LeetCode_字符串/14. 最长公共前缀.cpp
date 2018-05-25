class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string str = "";
		if (strs.size() == 0)
		{
			return "";
		}
		if (strs.size() == 1)
		{
			return strs[0];
		}
		for (int i = 0; i < strs[0].size(); i++)
		{
			for (int n = 1; strs.size() != 0 && n < strs.size(); n++)
			{
				if (strs[n][i] == strs[0][i])
				{
					if (n == strs.size() - 1)
					{
						str += strs[n][i];
					}
				}
				else
				{
					return str;
				}
			}
		}
		return str;
	}
};