class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
		{
			return 0;
		}
		int t = 1;
		int n = 0;
		int y = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			if (y == nums[i])
			{
				t++;
			}
			else if (y != nums[i])
			{
				for (int z = 0; z < t && z < 2; z++)
				{
					nums[n] = y;
					n++;
				}
				y = nums[i];
				t = 1;
			}
		}
		for (int z = 0; z < t && z < 2; z++)
		{
			nums[n] = y;
			n++;
		}
		cout << n;
		return n;
	}
};