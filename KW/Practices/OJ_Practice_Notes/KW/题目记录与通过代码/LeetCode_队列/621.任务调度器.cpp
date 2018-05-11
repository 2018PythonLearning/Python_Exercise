class Solution {
public:
	int leastInterval(vector<char>& tasks, int n) {
		int x[26];
		int y = 0;
		int max = 0;
		int count = 1;
		for (int i = 0; i < 26; i++)
		{
			x[i] = 0;
		}
		for (int i = 0; i < tasks.size(); i++)
		{
			if (x[tasks[i] - 'A'] == 0)
			{
				y++;
			}
			x[tasks[i] - 'A']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (max < x[i])
			{
				max = x[i];
				count = 1;
			}
			else if (max == x[i])
			{
				count++;
			}
		}
		cout << max << n << count;
		return (max - 1) * (n + 1) + count > tasks.size() ? (max - 1) * (n + 1) + count : tasks.size();
	}
};