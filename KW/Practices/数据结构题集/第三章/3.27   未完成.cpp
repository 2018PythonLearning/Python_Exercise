//递归
int Ackerman(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (m != 0 && n == 0)
	{
		return Ackerman(m - 1, 1);
	}
	else
	{
		return Ackerman(m - 1, Ackerman(m, n - 1));
	}
}
//非递归
int akm_ (int m, int n) {
	int stack[1000];
	int top = 0; //栈顶指针
	// 递归转非递归，其实质就是模拟递归入栈出栈的过程
	if (m == 0)
		return n + 1;
	if (n == 0) {
		stack[top++] = m - 1;
		stack[top++] = 1;
	} else {
		stack[top++] = m - 1;
		stack[top++] = m;
		stack[top++] = n - 1;
	}

	while (top > 1) {
		n = stack[--top];
		m = stack[--top];
		if (m == 0) {
			stack[top++] = n + 1;
		}

		if (m != 0 && n == 0) {
			stack[top++] = m - 1;
			stack[top++] = 1;
		}
		if (m != 0 && n != 0) {
			stack[top++] = m - 1;
			stack[top++] = m;
			stack[top++] = n - 1;
		}
	}

	return stack[0];
}


int main() {
	for (int i = 3; i > 0; i--)
		for (int j = 4; j > 0; j--)
			printf("%d %d\n", akm(i, j), akm_(i, j));
	return 0;
}