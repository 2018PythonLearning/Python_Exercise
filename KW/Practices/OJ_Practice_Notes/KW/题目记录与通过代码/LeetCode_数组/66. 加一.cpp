class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int i = 0; i < digits.size(); i++)
		{
			if (digits[i] != 9)
			{
				break;
			}
			if (i == digits.size() - 1)
			{
				vector<int> vi;
				vi.push_back(1);
				for (int n = 0; n < digits.size(); n++)
				{
					vi.push_back(0);
				}
				return vi;
			}
		}
		vector<int> vi(digits);
		for (int i = digits.size() - 1; i >= 0; i--)
		{
			if (vi[i] == 9)
			{
				vi[i] = 0;
			}
			else
			{
				vi[i]++;
				break;
			}
		}
		return vi;
	}
};