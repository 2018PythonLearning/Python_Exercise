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

void mergesort(SqList& SqList1, SqList& SqList2)
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
			if (SqList3.elem[SqList3.length - 1] != SqList2.elem[y])
			{
				SqList3.elem[SqList3.length] = SqList2.elem[y];

			}
			else
			{
				SqList3.length--;
			}
			y++;
		}
		else if (y == SqList2.length)
		{
			if (SqList3.elem[SqList3.length - 1] != SqList1.elem[x])
			{
				SqList3.elem[SqList3.length] = SqList1.elem[x];
			}
			else
			{
				SqList3.length--;
			}
			x++;
		}
		else if (SqList1.elem[x] <= SqList2.elem[y])
		{
			if (SqList3.elem[SqList3.length - 1] != SqList1.elem[x])
			{
				SqList3.elem[SqList3.length] = SqList1.elem[x];
			}
			else
			{
				SqList3.length--;
			}
			x++;
		}
		else
		{
			if (SqList3.elem[SqList3.length - 1] != SqList2.elem[y])
			{
				SqList3.elem[SqList3.length] = SqList2.elem[y];

			}
			else
			{
				SqList3.length--;
			}
			y++;
		}
		SqList3.length++;
		
	}

	for (int i = 0; i < SqList3.length - 1; i++)
	{
		SqList1.elem[i] = SqList3.elem[i];
	}

	SqList1.length = SqList3.length;
	delete[] SqList3.elem;

}


int main()
{
	SqList SqList1;
	SqList SqList2;
	SqList1 = initList();
	SqList2 = initList();

	SqList1.length = 4;




	mergesort(SqList1, SqList2);

	for (int i = 0; i < SqList1.length; i++)
	{
		cout << SqList1.elem[i];

	}

	return 0;

}*/