/*#include<iostream>
using namespace std;


struct Link 
{
	int data;
	Link * next;
};

//struct LinkList
//{
//	Link head;
//	int len;
//};
//
//LinkList* InitList()
//{
//	LinkList *L = new LinkList;
//	L->head.next= NULL;
//	return L;
//}

Link* LOCATE(Link* L, Link* X)
{
	Link* p = L;
	while (p->data != X->data)
	{
		p = p->next;
	}
	return p;
}

int main()
{
	Link* L = new Link;
	L->next = new Link;
	L->next->next = new Link;
	L->next->next->next = new Link;
	L->next->next->next->next = new Link;
	L->next->next->next->next->next = new Link;
	L->next->next->next->next->next ->next = NULL;
	L->next->data = 1;
	L->next->next->data = 2;
	L->next->next->next->data = 3;
	L->next->next->next->next->data = 4;
	L->next->next->next->next->next->data = 5;

	Link* p = new Link;
	p->data = 3;
	p->next = NULL;

	Link* q = LOCATE(L, p);

	cout << int(q) << "\n" << int(L->next->next->next) << "\n" << int(p);



	return 0;
}*/