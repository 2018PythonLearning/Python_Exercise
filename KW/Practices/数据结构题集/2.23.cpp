/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void merge(Link* A, Link*B, Link* C)
{
	Link* p = C;

	while (A->next != NULL && B->next != NULL)
	{
		p->next = A->next;
		A->next = A->next->next;
		p = p->next;
		p->next = B->next;
		B->next = B->next->next;
		p = p->next;
	}
	if (A->next == NULL && B->next == NULL)
	{

	}
	else if (A->next == NULL)
	{
		p->next = B->next;
	}
	else
	{
		p->next = A->next;
	}
	delete A;
	delete B;
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

	Link* K = new Link;
	K->next = new Link;
	K->next->next = new Link;
	K->next->next->next = new Link;
	K->next->next->next->next = new Link;
	K->next->next->next->next->next = new Link;
	K->next->next->next->next->next->next = new Link;
	K->next->next->next->next->next->next->next = NULL;
	K->next->data = 1;
	K->next->next->data = 2;
	K->next->next->next->data = 3;
	K->next->next->next->next->data = 4;
	K->next->next->next->next->next->data = 5;
	K->next->next->next->next->next->next->data = 6;


	Link* C = new Link;
	merge(L, K, C);


	while (C->next != NULL)
	{
		C = C->next;
		cout << C->data;


	}




	return 0;
}*/