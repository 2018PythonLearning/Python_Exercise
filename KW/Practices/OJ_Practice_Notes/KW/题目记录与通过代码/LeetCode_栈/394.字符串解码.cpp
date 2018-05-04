class Solution {
public:
	string decodeString(string s) {
		if (s == "")
		{
			return s;
		}
		stack<string> c;
		string str = "";
		string str1 = "";
		int n = 0;
		stringstream ss;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{

				if (!c.empty() && c.top()[0] >= '0' &&  c.top()[0] <= '9')
				{
					str = c.top();
					c.pop();
					str += s[i];
					c.push(str);
					str = "";
				}
				else
				{
					str = s[i];
					c.push(str);
					str = "";
				}

			}
			else if (s[i] == '[')
			{
				str = s[i];
				c.push(str);
				str = "";
			}
			else if (s[i] == ']')
			{
				str = c.top();
				c.pop();
				while (c.top() != "[")
				{
					str1 = c.top();
					c.pop();
					str1 += str;
					str = str1;
					str1 = "";
				}
				c.pop();
				ss.clear();
				ss << c.top();
				ss >> n;
				c.pop();
				for (int t = 0; t < n; t++)
				{
					c.push(str);
				}
				str = "";

			}
			else
			{
				if (!c.empty() && c.top()[0] >= 'a' &&  c.top()[0] <= 'z')
				{
					str = c.top();
					c.pop();
					str += s[i];
					c.push(str);
					str = "";
				}
				else
				{
					str = s[i];
					c.push(str);
					str = "";
				}
			}

		}
		n = c.size();
		for (int i = 1; i < n; i++)
		{
			str1 = c.top();
			c.pop();
			str = c.top();
			c.pop();
			str += str1;
			c.push(str);
			str = "";
			str1 = "";
		}
		return c.top();
	}
};