class Solution {
private:
	vector<vector<int>> vvi;
public:
	void dg(vector<int>& candidates, int target, vector<int> vi, int n, int sum)
	{
		if (n > candidates.size() - 1)
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
			vi.push_back(candidates[i]);
			dg(candidates, target, vi, i, sum + candidates[i]);
			vi.pop_back();
		}
	}
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<int> vi;
		dg(candidates, target, vi, 0, 0);
		return vvi;
	}
};