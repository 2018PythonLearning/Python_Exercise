//²Î¿¼£ºhttps://www.cnblogs.com/ariel-dreamland/p/9138064.html
class Solution {
public:
	int search(vector<int>& nums, int target) {
		if (nums.size() == 0)
			return -1;
		int i = 0;
		int l = 0;
		int r = nums.size() - 1;
		while (1)
		{
			i = (r - l) / 2 + l;
			if (nums[r] == target)
			{
				return r;
			}
			else if (nums[l] == target)
			{
				return l;
			}
			else if (nums[i] == target)
			{
				return i;
			}
			else if (i == l || i == r)
			{
				return -1;
			}
			cout << i << "\n";
			if (nums[r] > nums[i])
			{
				if (target > nums[i] && target <= nums[r])
				{
					l = i;
				}
				else
				{
					r = i;
				}
			}
			else
			{
				if (target < nums[i] && target >= nums[l])
				{
					r = i;
				}
				else
				{
					l = i;
				}
			}

		}
	}
};