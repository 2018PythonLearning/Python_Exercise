class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int m[26] = { 0 };
		for (int i = 0; i < magazine.size(); i++)
		{
			m[magazine[i] - 'a'] += 1;
		}
		for (int i = 0; i <ransomNote.size(); i++)
		{
			if (m[ransomNote[i] - 'a'] > 0)
			{
				m[ransomNote[i] - 'a']--;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};