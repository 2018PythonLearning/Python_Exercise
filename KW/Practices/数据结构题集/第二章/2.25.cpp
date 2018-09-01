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

SqList mergesort(SqList SqList1, SqList SqList2)
{
	SqList SqList3;
	SqList3.elem = new int[LIST_INIT_SIZE];
	SqList3.length = 0;
	SqList3.listsize = LIST_INIT_SIZE;

	int x = 0;
	int y = 0;
	while (x < SqList1.length || y < SqList2.length)
	{
		if (x == SqList1.length)
		{
			SqList3.elem[x + y] = SqList2.elem[y];
			y++;
		}
		else if (y == SqList1.length)
		{
			SqList3.elem[x + y] = SqList1.elem[x];
			x++;
		}
		else if (SqList1.elem[x] <= SqList2.elem[y])
		{
			SqList3.elem[x + y] = SqList1.elem[x];
			x++;
		}
		else
		{
			SqList3.elem[x + y] = SqList2.elem[y];
			y++;
		}
		SqList3.length++;
		
	}
	return SqList3;

}


int main()
{
	SqList SqList1;
	SqList SqList2;
	SqList1 = initList();
	SqList2 = initList();

	SqList2.length = 4;

	SqList SqList3;


	SqList3 = mergesort(SqList1, SqList2);

	for (int i = 0; i < SqList3.length; i++)
	{
		cout << SqList3.elem[i];

	}

	return 0;

}*/