class Solution {
public:
	bool search(vector<int>& nums, int target) {
		if (nums.size() == 0)
		{
			return false;
		}
		int l = 0;
		int r = nums.size() - 1;
		int m = 0;

		while (1)
		{
			while (l != r && nums[r] == nums[r - 1])
			{
				r--;
			}
			m = (r - l) / 2 + l;
			if (target == nums[l] || target == nums[m] || target == nums[r])
			{
				return true;
			}
			if (nums[r] > nums[m])
			{
				if (target > nums[m] && target < nums[r])
				{
					l = m;
				}
				else
				{
					r = m;
				}
			}
			else
			{
				if (target > nums[l] && target < nums[m])
				{
					r = m;
				}
				else
				{
					l = m;
				}
			}
			if (r <= l || l + 1 == r)
			{
				return false;
			}
		}
	}
};