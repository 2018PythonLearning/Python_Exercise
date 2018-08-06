//²Î¿¼£ºhttps://blog.csdn.net/wangyuquanliuli/article/details/45749023
class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		if (nums.size() == 0)
		{
			return 1;
		}
		int n;
		for (int i = 0; i < nums.size();)
		{
			if (nums[i] == i + 1)
			{
				i++;
			}
			else
			{
				if (nums[i] > nums.size() || nums[i] < 1 || nums[i] == nums[nums[i] - 1])
				{
					i++;
					continue;
				}
				else
				{
					n = nums[i];
					nums[i] = nums[n - 1];
					nums[n - 1] = n;
				}
			}

		}
		for (int i = 1; i <= nums.size(); i++)
		{
			cout << nums[i - 1] << " " << i << "\n";
			if (nums[i - 1] != i)
			{
				return i;
			}
		}
		return nums[nums.size() - 1] + 1;
	}
};

