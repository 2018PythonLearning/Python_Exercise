int KMP(String s, String t, int pos)
{
	int count = 0;
	node x, y, p;
	x = s;
	y = t->succ;
	for (int i = 0; i < pos; i++)
	{
		x = x->succ;
	}
	while (x != NULL && y != NULL)
	{
		if (y == t || x->chdata == y->chdata)
		{
			y = y->succ;
			x = x->succ;
		}
		else
		{
			y = y->next;
		}
	}
	if (y == NULL)
	{
		p = t;
		while (p != NULL)
		{
			p = p->succ;
			count++;
		}
		while (count != 0)
		{
			x = x->next;
			count--;
		}
		while (x == s)
		{
			x = x->next;
			count++;
		}
		return count;
	}
	return 0;
}