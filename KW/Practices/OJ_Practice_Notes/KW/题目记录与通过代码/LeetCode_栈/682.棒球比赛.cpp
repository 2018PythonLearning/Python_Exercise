class Solution {
public:
	int calPoints(vector<string>& ops) {
		stack<int> s;
		int x, y;
		stringstream ss;
		for (int i = 0; i < ops.size(); i++)
		{
			if (ops[i] == "+")
			{
				x = s.top();
				s.pop();
				y = s.top();
				s.push(x);
				s.push(x + y);
			}
			else if (ops[i] == "D")
			{
				s.push(s.top() * 2);
			}
			else if (ops[i] == "C")
			{
				s.pop();
			}
			else
			{
				ss.clear();
				ss << ops[i];
				ss >> x;
				s.push(x);
			}
		}
		x = 0;
		while (s.size() != 0)
		{
			x += s.top();
			s.pop();
		}
		return x;
	}
};