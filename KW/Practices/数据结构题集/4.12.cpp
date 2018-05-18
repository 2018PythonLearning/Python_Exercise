/*void Replace(StringType& S, StringType T, StringType V)
{
	for (int i = 0; i < StrAssign(T); i++)
	{
		if (StrCompare(SubString(S, i, StrAssign(T)), T) == 0)
		{

		}

	}
}*/
遍历字符串
使用SubString来获取子串,使用StrCompare来判断子串是否和T相同
如若相同,就替换成V