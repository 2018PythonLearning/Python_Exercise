class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> vi1;
		vi1.push_back(1);
		if (rowIndex == 0)
		{
			return vi1;
		}
		vi1.push_back(1);
		if (rowIndex == 1)
		{
			return vi1;
		}
		for (int z = 1; z < rowIndex; z++)
		{
			vector<int> vi;
			vi.push_back(1);
			for (int i = 1; i < vi1.size(); i++)
			{
				vi.push_back(vi1[i] + vi1[i - 1]);
			}
			vi.push_back(1);
			vi1.clear();
			vi1.swap(vi);
		}
		return vi1;
	}
};