class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> uset;
		for (int num : nums)
			uset.insert(num);
		int longest = 0;
		for (int num : uset) {
			if (uset.find(num - 1) == uset.end()) {

				int cnt = 1;
				while (uset.find(num + 1) != uset.end()) {
					num++;
					cnt++;
				}
				longest = max(longest, cnt);
			}
		}
		return longest;
	}
	//     if(nums.size() == 0)
	//     {
	//         return 0;
	//     }
	//     map<int, int> mi;
	//     int max = INT_MIN;
	//     for(int i = 0; i < nums.size(); i++)
	//     {
	//         if(mi.count(nums[i]) == 0)
	//         {
	//             mi[nums[i]] = -1;
	//         }
	//     }
	//     for(int i = 0; i < nums.size(); i++)
	//     {
	//         if(mi[nums[i]] == -1)
	//         {
	//             int x = nums[i];
	//             int z = 1;
	//             // for(x = nums[i]; mi.count(x) == 1 && mi[x-1] == -1; x--)
	//             // {
	//             // }
	//             if(mi[x-1] == -1)
	//             {
	//                 continue;
	//             }
	//             for(; mi.count(x) == 1 && mi[x] == -1; x++)
	//             {
	//                 mi[x] = z;
	//                 z++;
	//             }
	//             if(max < z-1)
	//             {
	//                 max = z-1;
	//             }
	//         }
	//     }
	//     return max;
	// }
};
