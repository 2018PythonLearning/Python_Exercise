/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int DELETE(Link* L, int mink, int maxk)
{
	if (maxk <= mink || L->next == NULL)
	{
		return 0;
	}
	Link* q = L;
	while (q->next != NULL && q->next->data <= mink)
	{
		q = q->next;
	}
	Link* p = q;
	while (p->next != NULL && p->next->data < maxk)
	{
		p = p->next;
	}

	Link* x = q -> next;
	q->next = p->next;

	while (x != q->next)
	{
		Link* y = x;
		x = x->next;
		delete y;
	}


	return 1;

}

int main()
{
	Link* L = new Link;
	L->next = new Link;
	L->next->next = new Link;
	L->next->next->next = new Link;
	L->next->next->next->next = new Link;
	L->next->next->next->next->next = new Link;
	L->next->next->next->next->next->next = NULL;
	L->next->data = 1;
	L->next->next->data = 2;
	L->next->next->next->data = 3;
	L->next->next->next->next->data = 4;
	L->next->next->next->next->next->data = 5;


	DELETE(L, 1, 5);


	while (L->next != NULL)
	{
		L = L->next;
		cout << L->data;
	}


	return 0;
}*/