class Solution {
public:
	string sorting(string str)
	{
		auto a = str.begin();
		auto b = str.end();
		sort(a, b);
		return str;
	}
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		map<string, vector<int>> m;
		map<string, vector<int>>::iterator iter;
		vector<vector<string>> str;
		vector<string> str1;
		string s;
		vector<int> vi;
		int n = 0;
		for (int i = 0; i < strs.size(); i++)
		{
			s = sorting(strs[i]);
			vi = m[s];
			vi.push_back(i);
			m[s] = vi;
		}
		for (iter = m.begin(); iter != m.end(); iter++)
		{
			if (str.size() <= n)
			{
				str.push_back(str1);
			}
			vi = iter->second;
			for (int i = 0; i < vi.size(); i++)
			{
				str[n].push_back(strs[vi[i]]);
			}
			n++;
		}
		return str;


		//         vector<int> vi[26];
		//         for(int i = 0; i < strs.size(); i++)
		//         {
		//             for(int n = 0; n < strs[i].size(); n++)
		//             {
		//                 if(vi[str[n]].size() == 0)
		//                 {
		//                     vi[str[n]].push_back(i);
		//                 }
		//                 else
		//                 {

		//                 }

		//             }

		//         }
	}
};