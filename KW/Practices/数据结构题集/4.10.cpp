void ni(StringType a, StringType& b)
{
	StrAssign(b, a)
	for (int i = 0; i < StrLength(a); i++)
	{
		b[StrLength(b) - i - 1] = a[i]
	}

}