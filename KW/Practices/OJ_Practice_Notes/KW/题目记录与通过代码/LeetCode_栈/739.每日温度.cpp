class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		int size = temperatures.size();
		vector<int> v(size, 0);
		stack<int> s;
		for (int i = 0; i < size; i++)
		{
			if (!s.size() || temperatures[s.top()] >= temperatures[i])
			{
				s.push(i);
			}
			else
			{
				while (s.size() && temperatures[s.top()] < temperatures[i])
				{
					v[s.top()] = i - s.top();
					s.pop();
				}
				s.push(i);
			}
		}
		return v;





		//         vector<int> v;
		//         int n = 0;
		//         int size = temperatures.size();
		//         for(int i = 0; i < size-1; i++)
		//         {
		//             for(n = 1; temperatures[i + n] <= temperatures[i]; n++)
		//             {
		//                 if(n+i+1 == size)
		//                 {
		//                     n = 0;
		//                     break;
		//                 }
		//             }
		//             v.push_back(n);

		//         }
		//         v.push_back(0);
		//         return v;
	}
};