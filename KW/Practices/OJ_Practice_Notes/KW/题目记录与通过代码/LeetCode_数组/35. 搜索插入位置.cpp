class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (target < nums[0])
		{
			return 0;
		}
		if (target > nums[nums.size() - 1])
		{
			return nums.size();
		}
		int i = 0;
		int l = 0;
		int r = nums.size() - 1;
		while (1)
		{

			i = (r - l) / 2 + l;
			cout << i;
			if (nums[i] == target)
			{
				return i;
			}
			else if (nums[l] == target)
			{
				return l;
			}
			else if (nums[r] == target)
			{
				return r;
			}
			if (i == l)
			{
				if (nums[r] < target)
				{
					return r + 1;
				}
				else
				{
					return r;
				}
			}
			if (target > nums[i])
			{
				l = i;
			}
			else if (target < nums[i])
			{
				r = i;
			}
		}
	}
};