class Solution {
public:
	vector<string> fullJustify(vector<string>& words, int maxWidth) {
		vector<string> vs;
		int length = 0;
		int j = 0;
		int z = 0;
		for (int i = 0; i < words.size(); i++)
		{
			cout << i << " " << length << "\n";
			if (i == words.size() - 1 && length + words[i].size() <= maxWidth)
			{
				cout << "-+";
				length += words[i].size();
				vs.push_back("");
				for (; j <= i; j++)
				{
					vs[z] += words[j];
					if (j != i)
						vs[z] += ' ';
				}
				for (int n = 0; n < maxWidth - length; n++)
				{
					vs[z] += ' ';
				}
				break;
			}
			if (length + words[i].size() <= maxWidth)
			{

				length += words[i].size();
				length++;
			}
			else
			{
				length--;
				if (i - j == 1)
				{
					vs.push_back(words[i - 1]);
					for (int x = 0; x < maxWidth - length; x++)
					{
						vs[z] += ' ';
					}
				}
				else
				{
					int yu = (maxWidth - length + i - j - 1) % (i - j - 1);
					int shang = (maxWidth - length + i - j - 1) / (i - j - 1);
					cout << shang << "!";
					vs.push_back("");
					for (int n = 0; n < i - j - 1; n++)
					{
						vs[z] += words[n + j];
						for (int s = 0; s < shang; s++)
							vs[z] += ' ';
						if (yu > 0)
						{
							vs[z] += ' ';
							yu--;
						}
					}
					vs[z] += words[i - 1];
				}
				i--;
				j = i + 1;
				length = 0;
				z++;
			}
		}
		return vs;
	}
};