/*
���һ���ݹ麯��
void dye(int g[m][n], int x,int y)
{
	�ж�g[x][y]�Ƿ���ͬɫ����:
		�ǣ�
			�޸���ɫ
			dye(g(m)(n), x, y+1)
			dye(g(m)(n), x, y-1)
			dye(g(m)(n), x+1, y)
			dye(g(m)(n), x-1, y)
		���ǣ���������
}

*/