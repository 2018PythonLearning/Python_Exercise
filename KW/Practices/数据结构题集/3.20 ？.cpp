/*
设计一个递归函数
void dye(int g[m][n], int x,int y)
{
	判断g[x][y]是否是同色区域:
		是：
			修改颜色
			dye(g(m)(n), x, y+1)
			dye(g(m)(n), x, y-1)
			dye(g(m)(n), x+1, y)
			dye(g(m)(n), x-1, y)
		不是，函数结束
}

*/