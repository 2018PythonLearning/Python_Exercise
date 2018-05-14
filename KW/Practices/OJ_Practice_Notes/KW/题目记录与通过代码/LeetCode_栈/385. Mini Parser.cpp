/**
* // This is the interface that allows for creating nested lists.
* // You should not implement it, or speculate about its implementation
* class NestedInteger {
*   public:
*     // Constructor initializes an empty nested list.    构造一个空列表
*     NestedInteger();
*
*     // Constructor initializes a single integer.       初始化单个整数
*     NestedInteger(int value);
*
*     // Return true if this NestedInteger holds a single integer, rather than a nested list.    判断是否为整数
*     bool isInteger() const;
*
*     // Return the single integer that this NestedInteger holds, if it holds a single integer   返回整数
*     // The result is undefined if this NestedInteger holds a nested list
*     int getInteger() const;
*
*     // Set this NestedInteger to hold a single integer.      添加整数
*     void setInteger(int value);
*
*     // Set this NestedInteger to hold a nested list and adds a nested integer to it.    添加嵌套列表
*     void add(const NestedInteger &ni);
*
*     // Return the nested list that this NestedInteger holds, if it holds a nested list
*     // The result is undefined if this NestedInteger holds a single integer
*     const vector<NestedInteger> &getList() const;    返回嵌套列表
* };
*/
class Solution {
public:
	NestedInteger deserialize(string s) {
		if (s.empty())
			return NestedInteger();
		if (s[0] != '[')
			return NestedInteger(stoi(s));
		vector<string> v;
		stack<NestedInteger> s1;
		stringstream ss;
		int n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				v.push_back("");
				if (s[i - 1] == '-')
				{
					v[v.size() - 1] += '-';
				}
				v[v.size() - 1] += s[i];
				while (s[i + 1] >= '0' && s[i + 1] <= '9')
				{
					v[v.size() - 1] += s[i + 1];
					i++;
				}
			}
			else
			{
				v.push_back("");
				v[v.size() - 1] += s[i];
			}

		}
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i][0] == '[')
			{
				s1.push(NestedInteger());
			}
			else if (v[i][0] == ']' || v[i][0] == ',')
			{
				if (v[i - 1] != "]" && v[i - 1] != "," && v[i - 1] != "[")
				{
					ss.clear();
					ss << v[i - 1];
					ss >> n;
					cout << n;
					s1.top().add(NestedInteger(n));
				}

				if (v[i][0] == ']')
				{
					if (s1.size() > 1)
					{
						NestedInteger t = s1.top();
						s1.pop();
						s1.top().add(t);
					}

				}
			}

		}
		return s1.top();
	}
};