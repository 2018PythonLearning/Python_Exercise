while (t.next != NULL)
{
	if (t.ch == ָ���ַ�)
	{
		����һ��ָ��aָ��t.next;
		t.next = s;
		s��βָ��ָ��a;
		return 1;
	}
	t = t.next;
}
t.next = s;
return 1;