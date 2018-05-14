class Solution {
public:
	string removeDuplicateLetters(string s) {
		string str = "";
		stack<char> s2;
		stack<char> s1;
		map<char, int> m;
		map<char, bool> n;
		for (int i = 0; i < s.size(); i++)
		{
			m[s[i]] += 1;
			n[s[i]] = false;
		}
		s1.push(s[0]);
		m[s[0]]--;
		n[s[0]] = true;
		for (int i = 1; i < s.size(); i++)
		{
			if (n[s[i]] == true)
			{

			}
			else
			{
				while (s1.size() && s1.top() >= s[i] && m[s1.top()] > 0)
				{
					n[s1.top()] = false;
					s1.pop();
				}
				s1.push(s[i]);
				n[s[i]] = true;
			}
			m[s[i]]--;
		}
		while (s1.size())
		{
			s2.push(s1.top());
			s1.pop();
		}
		while (s2.size())
		{
			str += s2.top();
			s2.pop();
		}
		return str;
	}
};