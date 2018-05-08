class Solution {
public:
	bool isValid(string code) {
		stack<string> s;
		string str = "";
		int count = 0;
		if (code[0] != '<')
		{
			return false;
		}
		for (int n = 1; n <= 10; n++)
		{
			if (code[n] >= 'A' && code[n] <= 'Z')
			{
				str += code[n];
			}
			else if (code[n] == '>' && n > 1)
			{
				if (str.size() != n - 1)
				{
					return false;
				}
				else
				{
					str = "";
					break;
				}
			}
		}

		for (int i = 0; i < code.size(); i++)
		{
			//            cout << i << " " << count << "\n";
			if (code[i] == '<')
			{
				if (code[i + 1] == '!')
				{
					for (int n = 1; n <= 8; n++)
					{
						str += code[i + n];
					}
					if (str == "![CDATA[")
					{
						s.push(str);
						str = "";
						count++;
						i += 8;
						for (i++; i < code.size(); i++)
						{
							if (code[i] == ']' && code[i + 1] == ']' && code[i + 2] == '>')
							{
								s.pop();
								count--;
								i += 2;
								break;
							}
						}
					}
					else
					{
						//                        cout << '1';
						return false;
					}
				}
				else if (code[i + 1] == '/')
				{
					for (int n = 2; n <= 11; n++)
					{
						if (code[i + n] >= 'A' && code[i + n] <= 'Z')
						{
							str += code[i + n];
						}
						else if (code[i + n] == '>' && n > 2)
						{
							if (s.size() == 0)
							{
								return false;
							}
							if (s.size() == 1 && i + n + 1 != code.size())
							{
								return false;
							}
							//                            cout << str.size() << n;
							if (str == s.top() && str.size() == n - 2)
							{
								s.pop();
								count--;
								str = "";
								i += n;
								break;
							}
							else
							{
								//                                cout << '2' << s.top() << s.size();
								return false;
							}

						}
					}
				}
				else
				{
					for (int n = 1; n <= 10; n++)
					{
						if (code[i + n] >= 'A' && code[i + n] <= 'Z')
						{
							str += code[i + n];
						}
						else if (code[i + n] == '>' && n > 1)
						{
							if (str == "")
							{
								return false;
							}
							else
							{
								s.push(str);
								str = "";
								i += n;
								break;
							}
						}
					}
					if (s.size() - 1 == count)
					{
						count++;
					}
					else
					{
						//                        cout << '3' << i;
						return false;
					}
				}

			}
		}
		if (s.size() == 0)
		{
			return true;
		}
		else
		{
			//            cout << '4';
			return false;
		}
	}
};