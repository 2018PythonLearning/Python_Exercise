class Solution {
public:
	int compareVersion(string version1, string version2) {
		stringstream ss;
		int i = 0, n = 0;
		for (; i < version1.size() && n < version2.size(); i++, n++)
		{
			string s1 = "";
			string s2 = "";
			int a, b;
			for (int z = 0; version1[z + i] != '.' && z + i < version1.size(); z++)
			{
				s1 += version1[z + i];
			}
			for (int z = 0; version2[z + n] != '.' && z + n < version2.size(); z++)
			{
				s2 += version2[z + n];
			}
			ss.clear();
			ss << s1;
			ss >> a;
			ss.clear();
			ss << s2;
			ss >> b;

			if (a == b)
			{
				i += s1.size();
				n += s2.size();
			}
			else if (a > b)
			{
				return 1;
			}
			else if (a < b)
			{
				return -1;
			}
		}

		if (i < version1.size())
		{
			for (; i < version1.size(); i += 2)
			{
				for (int z = 0; version1[z + i] != '.' && z + i < version1.size(); z++)
				{
					if (version1[z + i] != '0')
					{
						return 1;
					}
				}

			}
		}
		else if (n < version2.size())
		{
			for (; n < version2.size(); n += 2)
			{
				for (int z = 0; version2[z + n] != '.' && z + n < version2.size(); z++)
				{
					if (version2[n + z] != '0')
					{
						return -1;
					}
				}

			}
		}

		return 0;
	}
};