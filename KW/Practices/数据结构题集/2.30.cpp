/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void filter(Link* A, Link*B, Link* C)
{
	Link* pa = A;
	Link* pb = B;
	Link* pc = C;
	Link* pz;
	while (pb->next != NULL && pc->next != NULL)
	{
		if (pb->next->data == pc->next->data)
		{
			while (pb->next->next != NULL && pb->next->data == pb->next->next->data)
			{
				pb = pb->next;
			}
			while (pc->next->next != NULL && pc->next->data == pc->next->next->data)
			{
				pc = pc->next;
			}
			while (pa->next != NULL && pa->next->data <= pb->next->data)
			{
				if (pa->next->data < pb->next->data)
				{
					pa = pa->next;
				}
				while(pa->next != NULL && pa->next->data == pb->next->data)
				{
					pz = pa->next;
					pa->next = pa->next->next;
					delete pz;
				}
			}

			pb = pb->next;


		}
		else if (pb->next->data < pc->next->data)
		{
			pb = pb->next;
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
	L->next->next->next->next->data = 6;
	L->next->next->next->next->next->data = 8;

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
	C->next = new Link;
	C->next->next = new Link;
	C->next->next->next = new Link;
	C->next->next->next->next = new Link;
	C->next->next->next->next->next = new Link;
	C->next->next->next->next->next->next = new Link;
	C->next->next->next->next->next->next->next = NULL;
	C->next->data = 1;
	C->next->next->data = 2;
	C->next->next->next->data = 3;
	C->next->next->next->next->data = 4;
	C->next->next->next->next->next->data = 5;
	C->next->next->next->next->next->next->data = 5;

	filter(L, K, C);


	while (L->next != NULL)
	{
		L = L->next;
		cout << L->data;
	}
	return 0;
}
*/