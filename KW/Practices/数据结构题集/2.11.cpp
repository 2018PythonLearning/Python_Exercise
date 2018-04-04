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

void ListInsert(SqList &SqList1, int x)
{
	int in;
	for (int n = 0; n < SqList1.length; n++)
	{
		if (x <= SqList1.elem[n])
		{
			in = n;
			break;
		}
	}

	for (int n = SqList1.length; n >= in; n--)
	{
		SqList1.elem[n + 1] = SqList1.elem[n];
	}
	SqList1.elem[in] = x;

	SqList1.length++;
}



int main()
{
	SqList SqList1;
	SqList1 = initList();
	ListInsert(SqList1, 3);
	for (int x = 0; x < SqList1.length; x++)
	{
		cout << SqList1.elem[x];
	}

	return 0;

}*/