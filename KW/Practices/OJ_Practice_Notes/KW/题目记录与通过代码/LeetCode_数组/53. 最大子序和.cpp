class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int max = nums[0];
		int n = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			n += nums[i];
			if (n < nums[i])
			{
				n = nums[i];
			}
			if (max < n)
			{
				max = n;
			}

		}
		return max;
	}
};