class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		int z = nums[0] + nums[1] + nums[2];
		int x = 0;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			int a = i + 1;
			int b = nums.size() - 1;
			while (a < b)
			{
				x = nums[i] + nums[a] + nums[b];
				if (abs(z - target) > abs(x - target))
				{
					cout << "!";
					z = x;
				}
				if (x > target)
				{
					b--;
				}
				else if (x < target)
				{
					a++;
				}
				else
				{
					return z;
				}
			}
		}
		return z;
	}
};