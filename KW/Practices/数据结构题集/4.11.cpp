void sf4_11(int a[], StringType s, StringType t, StringType& r)
{
	int i = 0;
	bool b;
	for (int x = 0; x < StrLength(s); x++)
	{
		b = true;
		for (int y = 0; y < StrLength(t); y++)
		{
			if (s[x] == t[y])
			{
				b = false;
				break;
			}
		}
		if (b == true)
		{
			for (int y = 0; y < StrLength(r); y++)
			{
				if (r[y] == s[x])
				{
					b = false;
					break;
				}
			}
			if (b == true)
			{
				r[i] = s[x];
				a[i] = x;
				i++;

			}
		}
	}
}