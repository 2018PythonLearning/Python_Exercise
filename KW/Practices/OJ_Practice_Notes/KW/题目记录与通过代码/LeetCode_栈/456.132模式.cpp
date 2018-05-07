class Solution {
public:
	bool find132pattern(vector<int>& nums) {
		//²é¿´£ºhttps://www.cnblogs.com/grandyang/p/6081984.html
		int third = INT_MIN;
		stack<int> s;
		for (int i = nums.size() - 1; i >= 0; --i)
		{
			if (nums[i] < third)
				return true;
			else while (!s.empty() && nums[i] > s.top())
			{
				third = s.top();
				s.pop();
			}
			s.push(nums[i]);
		}
		return false;

	}
};