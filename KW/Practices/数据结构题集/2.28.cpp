/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void mergesort(Link* A, Link*B, Link* C)
{
	Link* pc = C;

	while (A->next != NULL || B->next != NULL)
	{
		if (A->next == NULL)
		{
			pc->next = B->next;
			B->next = B->next->next;
			pc = pc->next;


		}
		else if (B->next == NULL)
		{
			pc->next = A->next;
			A->next = A->next->next;
			pc = pc->next;

		}
		else if (A->next->data <= B->next->data)
		{
			pc->next = A->next;
			A->next = A->next->next;
			pc = pc->next;


		}
		else
		{
			pc->next = B->next;
			B->next = B->next->next;
			pc = pc->next;

		}
	}

	delete A;
	delete B;

	pc = C;
	Link* pb;

	while (pc->next->next != NULL)
	{
		if (pc->next->data == pc->next->next->data)
		{
			pb = pc->next;
			pc->next = pc->next->next;
			delete pb;
		}
		else
		{
			pc = pc->next;
		}
	}

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
	mergesort(L, K, C);


	while (C->next != NULL)
	{
		C = C->next;
		cout << C->data;
	}
	return 0;
}*/
