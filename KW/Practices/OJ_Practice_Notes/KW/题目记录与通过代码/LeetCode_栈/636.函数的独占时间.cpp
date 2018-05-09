
class Solution {
public:
	int si(string str, int x)
	{
		int n[2];
		string s = "";
		string t = "";
		stringstream ss;
		for (int i = 0; i < 2; i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				s += str[i];
			}
			else
			{
				break;
			}
		}
		ss << s;
		ss >> n[0];
		for (int i = s.size() + 5; i < str.size(); i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				t += str[i];
			}
		}
		ss.clear();
		ss << t;
		ss >> n[1];
		//        cout << n[x] << " ";
		return n[x];
	}

	vector<int> exclusiveTime(int n, vector<string>& logs) {
		vector<int> s;
		int time = 0;
		vector<int> m(n, 0);
		int t = 0;
		for (int i = 0; i < logs.size(); i++)
		{
			if (logs[i][2] == 's' || logs[i][3] == 's' || logs[i][4] == 's')
			{
				s.push_back(si(logs[i], 1));
			}
			else if (logs[i][2] == 'e' || logs[i][3] == 'e' || logs[i][4] == 'e')
			{
				t = (si(logs[i], 1) - s[s.size() - 1] + 1);
				m[si(logs[i], 0)] += t;
				s.pop_back();
				if (s.size() > 0)
				{
					for (int x = 0; x < s.size(); x++)
					{
						s[x] += t;
					}
				}

				t = 0;
			}
		}
		return m;
	}






	//     vector<int> exclusiveTime(int n, vector<string>& logs) {
	//         stack<int> s;
	//         int time = 0;
	//         vector<int> m(n, 0);
	//         int t = 0;
	//         for(int i = 0; i < logs.size(); i++)
	//         {
	//             if(logs[i][2] == 's' || logs[i][3] == 's' || logs[i][4] == 's')
	//             {
	//                 if(s.size() > 0)
	//                 {
	//                     t = (si(logs[i], 1) - time );
	//                     m[s.top()] += t;
	// //                     cout << t << " ";
	// //                     if(t == 0)
	// //                     {
	// //                         m[s.top()] += 1;
	// //                     }
	// //                     else if(t < 0)
	// //                     {

	// //                     }
	// //                     else
	// //                     {
	// //                         m[s.top()] += t;
	// //                     }
	//                     t = 0;
	//                 }
	//                 s.push(si(logs[i], 0));
	//                 time = si(logs[i], 1);
	//             }
	//             else if(logs[i][2] == 'e' || logs[i][3] == 'e' || logs[i][4] == 'e')
	//             {
	//                 t = (si(logs[i], 1) - time + 1);
	//                 m[s.top()] += t;
	// //                 if(t == 0)
	// //                 {
	// //                     m[s.top()] += 1;
	// //                 }
	// //                 else if(t < 0)
	// //                 {

	// //                 }
	// //                 else
	// //                 {
	// //                     m[s.top()] += t;
	// //                 }
	//                 t = 0;
	//                 s.pop();
	//                 time = si(logs[i], 1)+1;
	//             }
	// //                            cout << m[0] << " " << m[1] << " " << time << "\n";
	//         }
	//         return m;
	//     }
};