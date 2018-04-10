/*#include<iostream>
using namespace std;


struct Link
{
	char data;
	Link * next;
};

void Prior(Link* L, Link* A, Link* B, Link* C)
{
	Link* p;
	Link* a = A;
	Link* b = B;
	Link* c = C;
	p = L;
	while (p->next != NULL)
	{
		if (p->next->data >= '0' && p->next->data <= '9')
		{
			a->next = p->next;
			p = p->next;
			a = a->next;
		}
		else if ((p->next->data >= 'a' && p->next->data <= 'z') ||
					(p->next->data >= 'A' && p->next->data <= 'Z'))
		{
			b->next = p->next;
			p = p->next;
			b = b->next;
		}
		else
		{
			c->next = p->next;
			p = p->next;
			c = c->next;
		}
	}
	a->next = A->next;
	b->next = B->next;
	c->next = C->next;
	

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
	L->next->data = '1';
	L->next->next->data = 'a';
	L->next->next->next->data = '2';
	L->next->next->next->next->data = '@';
	L->next->next->next->next->next->data = 'A';

	Link* A = new Link;
	Link* B = new Link;
	Link* C = new Link;

	Prior(L, A, B, C);

	for (int i = 0; i < 6; i++)
	{
		A = A->next;
		cout << A->data;
	}
	for (int i = 0; i < 6; i++)
	{
		B = B->next;
		cout << B->data;
	}
	for (int i = 0; i < 6; i++)
	{
		C = C->next;
		cout << C->data;
	}

	return 0;
}*/