class Solution {
public:
	int longestValidParentheses(string s) {
		// -1Îª £¨ £¬-2Îª £© 
		stack<int> st;
		int n;
		int max = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				st.push(-1);
			}
			else if (s[i] == ')')
			{
				if (st.size() > 0)
				{
					n = st.top();
					if (n != -2)
					{
						if (n == -1)
						{
							st.pop();
							if (st.size() > 0)
							{
								n = st.top();
								if (n > 0)
								{
									st.pop();
									st.push(n + 2);
								}
								else
								{
									st.push(2);
								}
							}
							else
							{
								st.push(2);
							}
						}
						else if (n > 0)
						{
							st.pop();
							if (st.size() > 0 && st.top() == -1)
							{
								st.pop();
								n += 2;
								if (st.size() > 0 && st.top() > 0)
								{
									n += st.top();
									st.pop();
									st.push(n);
								}
								else
								{
									st.push(n);
								}

							}
							else
							{
								st.push(n);
								st.push(-2);
							}
						}
					}
					else
					{
						st.push(-2);
					}
				}

			}
		}
		while (st.size() != 0)
		{
			cout << st.top();
			if (max < st.top())
			{
				max = st.top();
			}
			st.pop();
		}
		return max;


		/*
		vector<int> v;
		int x = 0;
		int y = 0;
		int max = 0;
		for(int i = 0; i < s.size(); i++)
		{
		if(s[i] == '(')
		{
		x++;
		}
		else
		{
		y++;
		}
		if(x < y)
		{
		v.push_back(x*2);
		x = 0;
		y = 0;
		}
		}
		if(x > y)
		{
		for(int i = 0; i < s.size(); i++)
		{
		if(s[i] == '(')
		{
		x++;
		}
		else
		{
		y++;
		}
		if(x < y)
		{
		v.push_back(x*2);
		x = 0;
		y = 0;
		}
		}
		}
		v.push_back(y*2);
		for(int i = 0; i < v.size(); i++)
		{
		if(max < v[i])
		{
		max = v[i];
		}
		}
		return max;
		*/
	}
};