class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		vector<int> n;
		int i = 0;
		for (int x = 0; x < findNums.size(); x++)
		{

			for (int y = 0; y < nums.size(); y++)
			{
				i = y;
				while (nums[y] == findNums[x] && i + 1 < nums.size())
				{
					i++;
					if (findNums[x] < nums[i])
					{
						n.push_back(nums[i]);
						break;
					}
				}
				if (n.size() - 1 == x)
				{
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