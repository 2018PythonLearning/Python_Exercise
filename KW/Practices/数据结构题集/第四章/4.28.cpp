void next(String t)
{
	node x, y;
	x = t->succ;
	y = t;
	x->next = t;
	while (x->succ == NULL)
	{
		if (y == t || x->chdata == y->chdata)
		{
			x = x->succ;
			y = y->succ;
			x->next = y;
		}
		else
		{
			y = y->next;
		}
	}
}