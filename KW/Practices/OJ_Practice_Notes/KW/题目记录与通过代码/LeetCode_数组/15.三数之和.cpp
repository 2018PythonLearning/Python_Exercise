class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> vvi;
		if (nums.size() < 3)
			return vvi;
		sort(nums.begin(), nums.end());
		for (int a = 0; a < nums.size() - 2 && nums[a] <= 0; a++)
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
				else if (nums[a] + nums[b] + nums[c] == 0)
				{
					vector<int> vi;
					vi.push_back(nums[a]);
					vi.push_back(nums[b]);
					vi.push_back(nums[c]);
					vvi.push_back(vi);
					b++;
					c--;
				}
				else if (nums[a] + nums[b] + nums[c] > 0)
				{
					c--;
				}
				else if (nums[a] + nums[b] + nums[c] < 0)
				{
					b++;
				}

			}
		}
		sort(vvi.begin(), vvi.end());
		auto iter = unique(vvi.begin(), vvi.end());
		vvi.erase(iter, vvi.end());
		return vvi;
	}
};




// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> vvi;
//         sort(nums.begin(), nums.end()); 
//         for(int a = 0; a < nums.size();)
//         {
//             for(int b = a+1; b < nums.size();)
//             {
//                 for(int c = b+1; c < nums.size();)
//                 {
//                     if(nums[a] + nums[b] + nums[c] == 0)
//                     {
//                         vector<int> vi;
//                         vi.push_back(nums[a]);
//                         vi.push_back(nums[b]);
//                         vi.push_back(nums[c]);
//                         vvi.push_back(vi);
//                         break;
//                     }
//                     c++;
//                     while(nums[c] == nums[c-1])
//                     {
//                         c++;
//                     }
//                 }
//                 b++;
//                 while(nums[b] == nums[b-1])
//                 {
//                     b++;
//                 }
//             }
//             a++;
//             while(nums[a] == nums[a-1])
//             {
//                 a++;
//             }
//         }
//         return vvi;
//     }
// };