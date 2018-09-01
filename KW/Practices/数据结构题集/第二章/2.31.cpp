/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void DelLast(Link* L)
{
	Link* p;
	Link* q;
	p = L;
	p = p->next;
	while (p->next->next != L)
	{
		p = p->next;
	}
	p->next = p->next->next;
}

int main()
{
	Link* L = new Link;
	L->next = new Link;
	L->next->next = new Link;
	L->next->next->next = new Link;
	L->next->next->next->next = new Link;
	L->next->next->next->next->next = L;

	L->data = 1;
	L->next->data = 2;
	L->next->next->data = 3;
	L->next->next->next->data = 4;
	L->next->next->next->next->data = 5;

	DelLast(L);

	for (int i = 0; i < 5; i++)
	{
		cout << L->data;
		L = L->next;

	}

	return 0;
}
*/