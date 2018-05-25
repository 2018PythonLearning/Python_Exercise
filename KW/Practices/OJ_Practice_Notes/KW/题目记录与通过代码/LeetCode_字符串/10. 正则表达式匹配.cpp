class Solution {
public:
	bool match(string s, string p, int i, int n)
	{
		if (i >= s.size() && n >= p.size())
		{
			cout << "a";
			return true;
		}
		else if (i > s.size() - 1 && n < p.size() && p[n + 1] != '*') //一串字符已读完，一串字符未读完
		{
			return false;
		}
		else if (i < s.size() && n > p.size() - 1) //一串字符已读完，一串字符未读完
		{
			return false;
		}
		else if (p[n] == '.')  //p[n] == '.'
		{
			if (n + 1 < p.size() && p[n + 1] == '*') //p[n+1] == '*'
			{
				for (int x = 0; i + x <= s.size(); x++)
				{

					if ((i + x == s.size() || i + x == s.size() - 1) && n + 1 == p.size() - 1)
						return true;
					if (match(s, p, i + x, n + 2))
					{
						return true;
					}
				}
			}
			else
			{
				if (i == s.size())
				{
					return false;
				}
				if (match(s, p, i + 1, n + 1))
				{
					return true;
				}
			}
			return false;
		}
		else if (s[i] != p[n] && p[n + 1] == '*')  //两个字符不同，并且p[n+1] == '*'
		{
			if (match(s, p, i, n + 2))
				return true;
			return false;
		}
		else if (p[n] >= 'a' && p[n] <= 'z') //p[n]是字母
		{
			if (n + 1 < p.size() && p[n + 1] == '*') //p[n+1] == '*'
			{
				if (match(s, p, i, n + 2))
				{
					return true;
				}
				for (int x = 0; i + x < s.size() && (s[i + x] == p[n]); x++)
				{
					if (i + x == s.size() - 1 && n + 1 == p.size() - 1)
						return true;
					if (match(s, p, i + x + 1, n + 2))
					{
						return true;
					}
				}
			}
			else
			{
				if (s[i] == p[n] && match(s, p, i + 1, n + 1))
				{
					return true;
				}
			}
			return false;
		}
		else if (p[n] != '.' && s[i] != p[n])  //两个字符不同，并且p[n] != '.'
		{
			return false;
		}
		else if (s.size() == 0 && p.size() != 0)
		{
			return false;
		}
		else if (s.size() != 0 && p.size() == 0)
		{
			return false;
		}
	}
	bool isMatch(string s, string p) {
		int i = 0;
		int n = 0;
		if (match(s, p, i, n))
		{
			return true;
		}
		else
		{
			return false;
		}



		//         int n = 0;
		//         int i;
		//         for(i = 0; i < s.size(); i++)
		//         {
		//             if(p[n] == '.')
		//             {
		//                 if(n + 1 < p.size() && p[n + 1] == '*')
		//                 {
		//                     for(int x = 0; x+i < s.size(); x++)
		//                     {
		//                         if(s[i+x] == )
		//                     }
		//                     n++;
		//                 }
		//             }
		//             else
		//             {
		//                 if(p[n] == s[i])
		//                 {
		//                     if(n + 1 < p.size() && p[n + 1] == '*')
		//                     {
		//                         while(s[i] == s[i + 1])
		//                         {
		//                             i++;
		//                         }
		//                         if(s[i] != p[n])
		//                         {
		//                             return false;
		//                         }
		//                         n++;
		//                     }
		//                 }
		//                 else
		//                 {

		//                     return false;
		//                 }

		//             }
		//             n++;
		//         }
		//         if(n < p.size()-1)
		//         {
		//             return false;
		//         }
		//         return true;
	}
};