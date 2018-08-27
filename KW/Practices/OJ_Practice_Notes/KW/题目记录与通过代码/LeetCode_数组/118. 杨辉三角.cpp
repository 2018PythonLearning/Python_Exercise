class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> vvi;
		if (numRows == 0)
		{
			return vvi;
		}
		vector<int> v;
		v.push_back(1);
		vvi.push_back(v);
		if (numRows == 1)
		{
			return vvi;
		}
		v.push_back(1);
		vvi.push_back(v);
		if (numRows == 2)
		{
			return vvi;
		}
		for (int z = 2; z < numRows; z++)
		{
			vector<int> vi;
			vi.push_back(1);
			for (int i = 1; i < vvi[vvi.size() - 1].size(); i++)
			{
				vi.push_back(vvi[vvi.size() - 1][i] + vvi[vvi.size() - 1][i - 1]);
			}
			vi.push_back(1);
			vvi.push_back(vi);
		}
		return vvi;
	}
};