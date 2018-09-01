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

int compare(SqList SqList1, SqList SqList2)
{
	int i = 0;
	while (SqList1.elem[i] == SqList2.elem[i])
	{
		i++;
	}
	if (SqList1.length - i + 1 == 0 && SqList2.length - i + 1 == 0)
	{
		return 0;
	}
	else if (SqList1.length - i + 1 == 0 && SqList2.length - i + 1 != 0)
	{
		return -1;
	}
	else if (SqList1.length - i + 1 != 0 && SqList2.length - i + 1 == 0)
	{
		return 1;
	}
	else if (SqList1.elem[i] == SqList2.elem[i])
	{
		return 0;
	}
	else if (SqList1.elem[i] > SqList2.elem[i])
	{
		return 1;
	}
	else if (SqList1.elem[i] < SqList2.elem[i])
	{
		return -1;
	}
}


int main()
{
	SqList SqList1;
	SqList SqList2;
	SqList1 = initList();
	SqList2 = initList();



	SqList2.elem[3] = 1;

	cout << compare(SqList1, SqList2);

	for (int i = 0; i < 5; i++)
	{
		cout << SqList1.elem[i];
		cout << SqList2.elem[i];
	}

	return 0;

}*/