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
		for (int i = n; i < nums.size(); i++)
		{
			vi.push_back(nums[i]);
			dg(nums, i + 1, vi);
			vi.pop_back();
		}
		dg(nums, nums.size(), vi);
	}
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<int> vi;
		dg(nums, 0, vi);
		return vvi;
	}
};