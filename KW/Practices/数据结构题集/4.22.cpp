while (t.next != NULL)
{
	if (t.ch == 指定字符)
	{
		声明一个指针a指向t.next;
		t.next = s;
		s的尾指针指向a;
		return 1;
	}
	t = t.next;
}
t.next = s;
return 1;