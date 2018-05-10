class Solution {
private:
	struct atom
	{
		string str;
		int num;
	};
public:
	static bool compare(atom a, atom b)
	{
		return a.str < b.str;
	}
	string countOfAtoms(string formula) {
		int n = 1;
		int x = 0;
		vector<atom>::iterator iter;
		vector<atom> s;
		string str = "";
		string str1 = "";
		atom a = { "", 1 };
		stringstream ss;
		for (int i = 0; i < formula.size(); i++)
		{
			if (formula[i] >= 'A' && formula[i] <= 'Z')
			{
				a.str += formula[i];
				for (n = 1; formula[i + n] >= 'a' && formula[i + n] <= 'z'; n++)
				{
					a.str += formula[i + n];
				}
				i += n - 1;
				n = 1;
				s.push_back(a);
				a.str = "";
			}
			else if (formula[i] >= '0' && formula[i] <= '9')
			{
				for (n = 0; formula[i + n] >= '0' && formula[i + n] <= '9'; n++)
				{
					str += formula[i + n];
				}
				ss.clear();
				ss << str;
				ss >> x;
				//cout << x << " ";
				str = "";
				s[s.size() - 1].num += x - 1;
				x = 0;
				i += n - 1;
				n = 1;
			}
			else if (formula[i] == '(')
			{
				a.str = '(';
				s.push_back(a);
				a.str = "";
			}
			else if (formula[i] == ')')
			{
				for (n = 1; formula[i + n] >= '0' && formula[i + n] <= '9'; n++)
				{
					str += formula[i + n];
				}
				i += n - 1;
				n = 1;
				ss.clear();
				ss << str;
				ss >> x;
				str = "";
				//                cout << x << " ";
				for (int n = s.size() - 1; n >= 0; n--)
				{
					if (s[n].str[0] == '(')
					{
						iter = s.begin() + n;
						iter = s.erase(iter);
						break;
					}
					else
					{
						//                        cout << s[n].str << s[n].num << " " << x << "    ";
						s[n].num *= x;
						//                        cout << s[n].str << s[n].num << "\n";
					}
				}
				x = 0;
			}
			//            cout << s[s.size()-1].num << " " << s[s.size()-1].str <<  "\n";
		}

		sort(s.begin(), s.end(), compare);
		for (int i = 0; i < s.size(); i++)
		{
			str1 += s[i].str;
			x = s[i].num;
			//            cout << (s[i].str == s[i + 1].str) << " ";
			for (n = 0; i + n + 1 != s.size() && s[i + n].str == s[i + 1 + n].str; n++)
			{
				x += s[i + 1 + n].num;
				cout << x;
			}

			if (x != 1)
			{
				ss.clear();
				ss << x;
				ss >> str;
				str1 += str;
			}

			i += n;
		}
		return str1;
	}
};