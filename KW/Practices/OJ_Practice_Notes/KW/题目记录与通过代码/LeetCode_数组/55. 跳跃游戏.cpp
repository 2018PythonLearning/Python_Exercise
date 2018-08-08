class Solution {
public:
	bool canJump(vector<int>& nums) {
		if (nums.size() == 0 || nums.size() == 1)
		{
			return true;
		}
		int max = 0;
		int m = 0;
		for (int i = 0; i < nums.size();)
		{
			if (i + nums[i] >= nums.size() - 1)
				return true;
			for (int x = 1; x <= nums[i]; x++)
			{
				if (max < nums[i + x] + x)
				{
					max = nums[i + x] + x;
					m = x;
				}
			}
			if (max + nums[i] == 0)
			{
				return false;
			}
			i = i + m;
			max = 0;
			m = 0;
		}
	}
};