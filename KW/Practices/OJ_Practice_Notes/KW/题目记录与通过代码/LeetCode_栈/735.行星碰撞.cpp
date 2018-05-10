class Solution {
public:
	vector<int> asteroidCollision(vector<int>& asteroids) {
		vector<int> v;
		int x = 0;
		for (int i = 0; i < asteroids.size(); i++)
		{
			if (asteroids[i] > 0)
			{
				v.push_back(asteroids[i]);
			}
			else if (asteroids[i] < 0)
			{
				if (v.size() == 0 || v[v.size() - 1] < 0)
				{
					v.push_back(asteroids[i]);
				}
				else
				{
					x = asteroids[i] * (-1);
					cout << x;
					while (v[v.size() - 1] > 0 && x > v[v.size() - 1])
					{
						v.pop_back();
					}
					if (x == v[v.size() - 1])
					{
						v.pop_back();
					}
					else if (x < v[v.size() - 1])
					{

					}
					else
					{
						v.push_back(asteroids[i]);
					}
				}
			}
		}
		return v;
	}
};