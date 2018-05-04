class Solution {
public:
	string removeKdigits(string num, int k) {
		vector<char> c;
		int z = 0;
		string s = "";
		for (int x = 0; x < num.size() - k; x++)
		{
			cout << z << " ";
			c.push_back(num[z]);
			z++;
			for (int i = z; i < k + c.size(); i++)
			{
				if (c[c.size() - 1] > num[i])
				{
					c.pop_back();
					c.push_back(num[i]);
					z = i + 1;
				}
			}
		}
		for (int i = 0; i < c.size(); i++)
		{
			if (!s.size() && c[i] == '0')
			{

			}
			else
			{
				s += c[i];
			}

		}
		if (!s.size())
		{
			s = "0";
		}
		return s;











		//         if(k == num.size())
		//         {
		//             return "0";
		//         }
		//         vector<char> c;
		//         vector<int> q;
		//         int p = 0;
		//         string s = "";
		//         int x = num.size();
		//         for(int i = 0; i < x - k; i++)
		//         {
		//             c.push_back(num[k + i]);
		//             q.push_back(k + i);
		//         }
		//         for(int n = 0; n < x - k; n++)
		//         {
		//             for(int i = q[n - 1]; i > x; i--)
		//             {
		//                 for(int t = 0; t < q.size(); t++)
		//                 {

		//                     if(q[t] == i)
		//                     {
		//                         p = 0;
		//                         break;
		//                     }
		//                     else
		//                     {
		//                         p = 1;
		//                     }
		//                 }

		//                 if(p == 1)
		//                 {
		//                     if(num[i] <= c[n])
		//                     {
		//                         c[n] = num[i];
		//                         q[n] = i;

		//                     } 
		//                 }

		//             }
		//         }
		//         for(int i = 0; i < c.size(); i++)
		//         {
		//             if(!s.size() && c[i] == '0')
		//             {

		//             }
		//             else
		//             {
		//                 s += c[i]; 
		//             }

		//         }
		//         if(!s.size())
		//         {
		//             s = "0";
		//         }
		//         return s;
	}
};