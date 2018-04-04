/*
#include<iostream>
using namespace std;

struct MyStruct
{
	int i;
};


#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

struct SqList {
	MyStruct *elem;
	int length;
	int listsize;
};

SqList initList()
{
	SqList SqList1;
	SqList1.elem = new MyStruct[LIST_INIT_SIZE];
	SqList1.length = 5;
	SqList1.listsize = LIST_INIT_SIZE;
	SqList1.elem[0].i = 1;
	SqList1.elem[1].i = 2;
	SqList1.elem[2].i = 3;
	SqList1.elem[3].i = 4;
	SqList1.elem[4].i = 5;
	return SqList1;
}



//int DeleteK(SqList &a, int i, int k)
//{//本过程从顺序存储结构的线性表a中删除第i个元素起的k个元素
//	if (i<1 || k<0 || i + k>a.length)
//		return 0;             //参数不合法
//	else
//		for (int count = 1; count<k; count++)
//		{//删除一个元素
//			for (int j = a.length; j >= i + 1; j--)
//				a.elem[j - 1] = a.elem[j];
//			a.length--;
//		}
//	return 1;
//}//DeleteK


int DeleteK(SqList &a, int i, int k)
{
	//2.10
	//本过程从顺序存储结构的线性表a中删除第i个元素起的k个元素
	if (!(0<i <= a.length || 0 <= k <= a.length - i))
		return 0;//参数不合法
	else
	{
		for (int j = 0; j < a.length - i; j++)
		{
			a.elem[i - 1 + j] = a.elem[i + k - 1 + j];
		}
		a.length -= k;
	}
	return 1;
}//DeleteK

int main()
{
	SqList SqList1;
	SqList1 = initList();
	DeleteK(SqList1, 2, 2);
	for (int x = 0; x < SqList1.length; x++)
	{
		cout << SqList1.elem[x].i;
	}

	return 0;

}
*/