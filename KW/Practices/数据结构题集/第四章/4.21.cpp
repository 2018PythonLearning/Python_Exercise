StrAssign(&T, chars)
{
	�������
	for (int i = 0; i < chars�ĳ���; i++)
	{
		βָ��.next = new һ�����;
		βָ�� = βָ��.next;
		βָ��.ch = chars[i];
		������++;
	}
}
StrCopy(&T, s)
{
	����T���;
	for (int i = 0; i < s�ĳ���; i++)
	{
		Tβָ��.next = new һ�����;
		Tβָ�� = Tβָ��.next;
		Tβָ��.ch = ��s�ĵ�i���ַ�;
		T������++;
	}
}
StrCompare(s, t)
{
	����һ��ָ��aָ��sͷ���.next;
	����һ��ָ��bָ��tͷ���.next;
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
	return s.���ȣ�
}
Concat(s1, s2)
{
	s1.βָ�� = s2.ͷָ��.next;
}
SubString(&sub, s, pos, len)
{
	����sub���;
	����һ��ָ��aָ��sub.next
	for (int i = 0; i < pos, i++)
	{
		a = a.next;
	}
	for (int i = 0; i < len; i++)
	{
		subβָ��.next = new һ�����;
		subβָ�� = subβָ��.next;
		subβָ��.ch = a.ch;
		sub������++;
	}
}

