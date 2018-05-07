class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& nums) {
		vector<int> n;
		for (int x = 0; x < nums.size(); x++)
		{
			for (int y = (x + 1) % nums.size(); y != x; y = (y + 1) % nums.size())
			{
				if (nums[y] > nums[x])
				{
					n.push_back(nums[y]);
					break;
				}
			}
			if (n.size() - 1 != x)
			{
				n.push_back(-1);
			}
		}
		return n;
	}
};