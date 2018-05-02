class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		int num;
		stringstream ss;
		stack<int> a;
		int n[2];
		for (int i = 0; i < tokens.size(); i++)
		{

			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
			{
				n[1] = a.top();
				a.pop();
				n[0] = a.top();
				a.pop();
				if (tokens[i] == "+")
				{
					a.push(n[0] + n[1]);
				}
				else if (tokens[i] == "-")
				{
					a.push(n[0] - n[1]);
				}
				else if (tokens[i] == "*")
				{
					a.push(n[0] * n[1]);
				}
				else
				{
					a.push(n[0] / n[1]);
				}
			}
			else
			{
				ss.clear();
				ss << tokens[i];
				ss >> num;
				a.push(num);
			}

		}


		return a.top();
	}
};