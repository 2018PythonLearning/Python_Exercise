class Solution {
public:
	int calculate(string s) {
		stack<char> z;
		stack<int> x;
		char ch = ' ';
		int c[2];
		stringstream ss;
		int b;
		int v;
		int i = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				z.push('(');
			}
			else if (s[i] == ')')
			{
				while (!z.empty() && z.top() != '(')
				{
					if (!z.empty() && z.top() == '+')
					{
						c[1] = x.top();
						x.pop();
						c[0] = x.top();
						x.pop();
						x.push(c[0] + c[1]);
						z.pop();
					}
					else if (!z.empty() && z.top() == '-')
					{
						c[1] = x.top();
						x.pop();
						c[0] = x.top();
						x.pop();
						x.push(c[0] - c[1]);
						z.pop();
					}
				}
				z.pop();
				if (!z.empty() && z.top() == '+')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] + c[1]);
					z.pop();
				}
				else if (!z.empty() && z.top() == '-')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] - c[1]);
					z.pop();
				}
			}
			else if (s[i] == '+')
			{
				if (!z.empty() && z.top() == '(')
				{

				}
				else if (!z.empty() && z.top() == '+')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] + c[1]);
					z.pop();
				}
				else if (!z.empty() && z.top() == '-')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] - c[1]);
					z.pop();
				}
				z.push(s[i]);
			}
			else if (s[i] == '-')
			{
				if (!z.empty() && z.top() == '(')
				{
				}
				else if (!z.empty() && z.top() == '+')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] + c[1]);
					z.pop();
				}
				else if (!z.empty() && z.top() == '-')
				{
					c[1] = x.top();
					x.pop();
					c[0] = x.top();
					x.pop();
					x.push(c[0] - c[1]);
					z.pop();
				}
				z.push(s[i]);

			}
			else if (s[i] == ' ')
			{
			}
			else
			{
				ss.clear();
				ss << s[i];
				ss >> v;
				if (ch == '(' || ch == ')' || ch == '+' || ch == '-' || ch == ' ')
				{
					x.push(v);
				}
				else
				{
					b = x.top() * 10 + v;
					x.pop();
					x.push(b);
				}
			}
			ch = s[i];

		}
		if (!z.empty() && z.top() == '+')
		{
			c[1] = x.top();
			x.pop();
			c[0] = x.top();
			x.pop();
			x.push(c[0] + c[1]);
			z.pop();
		}
		else if (!z.empty() && z.top() == '-')
		{
			c[1] = x.top();
			x.pop();
			c[0] = x.top();
			x.pop();
			x.push(c[0] - c[1]);
			z.pop();
		}

		return x.top();
	}
};