class Solution {
private:
	vector<vector<int>> vvi;
public:
	void dg(vector<int>& nums, int n, vector<int> vi)
	{
		if (n == nums.size())
		{
			vvi.push_back(vi);
			return;
		}
		double z = 0.5;
		int x = n;
		for (int i = n; i < nums.size(); i++)
		{
			if (z == nums[i])
			{
				x++;
			}
			else
			{
				vi.push_back(nums[i]);
				dg(nums, i + 1, vi);
				vi.pop_back();
				z = nums[i];
			}
		}
		dg(nums, nums.size(), vi);

	}
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> vi;
		dg(nums, 0, vi);
		return vvi;
	}
};