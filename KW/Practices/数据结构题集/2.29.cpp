/*#include<iostream>
using namespace std;


#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

struct SqList {
	int *elem;
	int length;
	int listsize;
};

SqList initList()
{
	SqList SqList1;
	SqList1.elem = new int[LIST_INIT_SIZE];
	SqList1.length = 5;
	SqList1.listsize = LIST_INIT_SIZE;
	SqList1.elem[0] = 1;
	SqList1.elem[1] = 2;
	SqList1.elem[2] = 3;
	SqList1.elem[3] = 4;
	SqList1.elem[4] = 5;
	return SqList1;
}

void filter(SqList &A, SqList &B, SqList &C)
{
	int x = 0;
	int y = 0;
	SqList q;
	q.elem = new int[LIST_INIT_SIZE];
	q.length = 0;
	q.listsize = LIST_INIT_SIZE;

	while (x < B.length && y < C.length)
	{
		if (B.elem[x] == C.elem[y])
		{
			if (q.elem[q.length - 1] != B.elem[x])
			{
				q.elem[q.length] = B.elem[x];
				q.length++;
			}
			x++;
			y++;
		}
		else if (B.elem[x] > C.elem[y])
		{
			y++;
		}
		else if (C.elem[y] > B.elem[x])
		{
			x++;
		}
	}
	y = 0;
	x = 0;
	while (x < q.length && y < A.length)
	{
		if (q.elem[x] == A.elem[y])
		{	
			A.length--;
			for (int a = y; a < A.length; a++)
			{
				A.elem[a] = A.elem[a + 1];
			}
		}
		else if (q.elem[x] > A.elem[y])
		{
			y++;
		}
		else if (A.elem[y] > q.elem[x])
		{
			x++;
		}
	}


}


int main()
{
	SqList SqList1;
	SqList SqList2;
	SqList SqList3;
	SqList1 = initList();
	SqList2 = initList();
	SqList3 = initList();

	SqList1.elem[2] = 2;
	SqList1.elem[4] = 6;

	//SqList3.elem[2] = 7;
	//SqList3.elem[3] = 8;
	//SqList3.elem[4] = 10;

	//SqList2.elem[3] = 6;
	//SqList2.elem[4] = 8;

	filter(SqList1, SqList2, SqList3);

	for (int i = 0; i < SqList1.length; i++)
	{
		cout << SqList1.elem[i];
	}

	return 0;

}*/