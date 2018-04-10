/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void mergesort(Link* A, Link*B, Link* C)
{
	Link* pc;

	while (A->next != NULL || B->next != NULL)
	{
		if (A->next == NULL)
		{
			pc = C->next;
			C->next = B->next;
			B->next = B->next->next;
			C->next->next = pc;
		}
		else if (B->next == NULL)
		{
			pc = C->next;
			C->next = A->next;
			A->next = A->next->next;
			C->next->next = pc;
		}
		else if (A->next->data <= B->next->data)
		{
			pc = C->next;
			C->next = A->next;
			A->next = A->next->next;
			C->next->next = pc;

		}
		else
		{
			pc = C->next;
			C->next = B->next;
			B->next = B->next->next;
			C->next->next = pc;
		}
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
	C->next = NULL;
	mergesort(L, K, C);


	while (C->next != NULL)
	{
		C = C->next;
		cout << C->data;


	}
	return 0;
}
*/