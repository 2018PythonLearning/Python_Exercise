/*int sqrt(double A, double p, double e)
{
	if (p*p - A < e)
	{
		return p;
	}
	else
	{
		return sqrt(A, (p + A / p) / 2, e);
	}
}*/

// 3.26递归
double sqrt (double A, double p, double e) {
if (p * p - A) < e)
return p;
else
return sqrt(A, 1 / 2.0 * (p + A / p), e);
}

// 3.26非递归
double sqrt (double A, double p, double p) {
while (p * p - A >= e) {
// 这个题每个函数里只需要递归调用一次自身，且只有一个参数变化，所以栈都不需要
p = 1 / 2.0 * (p + A / p);
}
return p;
}