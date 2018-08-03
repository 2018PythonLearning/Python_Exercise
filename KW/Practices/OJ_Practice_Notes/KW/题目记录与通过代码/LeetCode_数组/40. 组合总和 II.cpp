class Solution {
private:
	vector<vector<int>> vvi;
public:
	void dg(vector<int>& candidates, int target, vector<int> vi, int n, int sum)
	{
		if (n > candidates.size())
		{
			return;
		}
		if (sum > target)
		{
			return;
		}
		if (sum == target)
		{
			vvi.push_back(vi);
			return;
		}
		for (int i = n; i < candidates.size(); i++)
		{
			if (i > n && candidates[i] == candidates[i - 1])
			{

			}
			else
			{
				vi.push_back(candidates[i]);
				dg(candidates, target, vi, i + 1, sum + candidates[i]);
				vi.pop_back();
			}

		}
	}
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<int> vi;
		sort(candidates.begin(), candidates.end());
		dg(candidates, target, vi, 0, 0);
		return vvi;
	}
};