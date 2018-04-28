class Solution {
public:
	string simplifyPath(string path) {
		vector<string> a;
		vector<string> b;
		string str;
		int i = 0;
		int n = 0;

		while (n != -1)
		{
			n = path.find('/', i);
			if (n - i >= 1)
			{
				a.push_back(path.substr(i, n - i));

			}
			if (n == -1)
			{
				if (path.size() - i > 0)
				{
					a.push_back(path.substr(i, path.size() - i));
				}
			}
			i = n + 1;
		}



		for (int i = 0; i < a.size(); i++)
		{

			if (a[i] == ".")
			{

			}
			else if (a[i] == "..")
			{
				if (!b.empty())
					b.pop_back();
			}
			else
			{
				b.push_back(a[i]);
			}

		}
		for (int i = 0; i < b.size(); i++)
		{

			str += '/';
			str += b[i];
		}

		if (b.empty())
		{
			return str += '/';
		}

		return str;
	}
};