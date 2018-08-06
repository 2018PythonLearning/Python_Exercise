class Solution {
public:
	int jump(vector<int>& nums) {
		if (nums.size() == 0 || nums.size() == 1)
		{
			return 0;
		}
		int max = 0;
		int m = 0;
		int step = 1;
		for (int i = 0; i < nums.size();)
		{
			if (i + nums[i] >= nums.size() - 1)
				return step;
			for (int x = 1; x <= nums[i]; x++)
			{
				if (max < nums[i + x] + x)
				{
					max = nums[i + x] + x;
					m = x;
				}
			}

			i = i + m;
			max = 0;
			m = 0;
			step++;
		}
	}
};