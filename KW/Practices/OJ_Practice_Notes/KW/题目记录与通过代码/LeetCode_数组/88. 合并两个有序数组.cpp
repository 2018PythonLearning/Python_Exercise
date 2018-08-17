class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = m - 1, x = nums1.size() - 1; i >= 0; i--)
		{
			nums1[x] = nums1[i];
			x--;
		}
		int x = nums1.size() - m;
		int m1 = 0;
		int n1 = 0;
		int i = 0;
		while (m1 != m && n1 != n)
		{
			if (nums1[m1 + x] > nums2[n1])
			{
				cout << nums2[n1] << "! ";
				nums1[i] = nums2[n1];
				i++;
				n1++;
			}
			else
			{
				cout << nums1[m1 + x] << "@ ";
				nums1[i] = nums1[m1 + x];
				i++;
				m1++;
			}
		}
		if (m1 == m)
		{
			while (n1 != n)
			{
				nums1[i] = nums2[n1];
				i++;
				n1++;
			}
		}
		else
		{
			while (m1 != m)
			{
				nums1[i] = nums1[m1 + x];
				i++;
				m1++;
			}
		}
	}
};