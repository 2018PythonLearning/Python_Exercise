StrAssign(&T, chars)
{
	将串清空
	for (int i = 0; i < chars的长度; i++)
	{
		尾指针.next = new 一个结点;
		尾指针 = 尾指针.next;
		尾指针.ch = chars[i];
		串长度++;
	}
}
StrCopy(&T, s)
{
	将串T清空;
	for (int i = 0; i < s的长度; i++)
	{
		T尾指针.next = new 一个结点;
		T尾指针 = T尾指针.next;
		T尾指针.ch = 串s的第i个字符;
		T串长度++;
	}
}
StrCompare(s, t)
{
	定义一个指针a指向s头结点.next;
	定义一个指针b指向t头结点.next;
	while (a.next != NULL && b.next != NULL)
	{
		if (a.ch > b.ch)
		{
			return 1;
		}
		if (a.ch < b.ch)
		{
			return -1;
		}
		a = a.next;
		b = b.next
	}
	if (a.next == NULL && b.next == NULL)
	{
		return 0;
	}
	if (a.next == NULL)
	{
		return -1;
	}	
	if (b.next == NULL)
	{
		return 1;
	}
}
StrLength(s)
{
	return s.长度；
}
Concat(s1, s2)
{
	s1.尾指针 = s2.头指针.next;
}
SubString(&sub, s, pos, len)
{
	将串sub清空;
	定义一个指针a指向sub.next
	for (int i = 0; i < pos, i++)
	{
		a = a.next;
	}
	for (int i = 0; i < len; i++)
	{
		sub尾指针.next = new 一个结点;
		sub尾指针 = sub尾指针.next;
		sub尾指针.ch = a.ch;
		sub串长度++;
	}
}

