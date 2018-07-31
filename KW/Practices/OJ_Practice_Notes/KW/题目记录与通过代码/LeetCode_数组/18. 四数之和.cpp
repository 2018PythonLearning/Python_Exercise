class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> vvi;
		if (nums.size() < 4)
			return vvi;
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 3; i++)
		{
			for (int a = i + 1; a < nums.size() - 2 && nums[a] + nums[i] + nums[i + 1] + nums[i + 2] <= target; a++)
			{
				int b = a + 1;
				int c = nums.size() - 1;

				while (b < c)
				{
					if (nums[b] == nums[b - 1] && b - 1 != a)
					{
						b++;
					}
					else if (c != nums.size() - 1 && nums[c] == nums[c + 1])
					{
						c--;
					}
					else if (nums[i] + nums[a] + nums[b] + nums[c] == target)
					{
						vector<int> vi;
						vi.push_back(nums[i]);
						vi.push_back(nums[a]);
						vi.push_back(nums[b]);
						vi.push_back(nums[c]);
						vvi.push_back(vi);
						b++;
						c--;
					}
					else if (nums[i] + nums[a] + nums[b] + nums[c] > target)
					{
						c--;
					}
					else if (nums[i] + nums[a] + nums[b] + nums[c] < target)
					{
						b++;
					}

				}
			}
		}

		sort(vvi.begin(), vvi.end());
		auto iter = unique(vvi.begin(), vvi.end());
		vvi.erase(iter, vvi.end());
		return vvi;
	}
};