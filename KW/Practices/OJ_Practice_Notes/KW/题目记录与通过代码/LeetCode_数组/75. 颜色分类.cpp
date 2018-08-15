//²é¿´£ºhttps://blog.csdn.net/scarlett_guan/article/details/80376900
class Solution {
public:
	void sortColors(vector<int>& nums) {
		int r = 0;
		int b = nums.size() - 1;
		while (nums[b] == 2)
		{
			b--;
		}
		for (int i = 0; i <= b; i++)
		{
			if (nums[i] == 0)
			{
				nums[i] = nums[r];
				nums[r] = 0;
				r++;
			}
			else if (nums[i] == 2)
			{
				nums[i] = nums[b];
				nums[b] = 2;
				while (nums[b] == 2)
				{
					b--;
				}
				i--;
			}
		}
	}
};