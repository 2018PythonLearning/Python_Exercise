class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.size() < 2)
		{
			return;
		}
		int min;
		int z = 0;
		for (int i = nums.size() - 2; i >= 0; i--)
		{
			if (nums[i] < nums[i + 1])
			{
				min = nums[i];
				z = i;
				break;
			}
			if (i == 0)
			{
				sort(nums.begin(), nums.end());
				return;
			}
		}

		for (int i = nums.size() - 1; i > z; i--)
		{
			if (nums[i] > min)
			{
				nums[z] = nums[i];
				nums[i] = min;
				break;
			}
		}
		cout << nums[z] << " " << z;
		sort(nums.begin() + z + 1, nums.end());
	}
};