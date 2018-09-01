/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int DeleteAndInsertSub(Link* la, Link* lb, int i, int j, int len)
{
	if (i<=0 || j<= 0 || len <= 0)
	{
		return 0;
	}

	Link* p = la;
	int k = 1;
	while (k + 1 < i )
	{
		p = p->next; 
		k++;
	}
	Link* q = p;
	k = 1;
	while (k <= len)
	{
		q = q->next;
		k++;
	}

	Link* s = lb;
	k = 1;
	while (k + 1 < j )
	{
		s = s->next;
		k++;
	}

	Link* z = q->next;
	q->next = s->next;
	s->next = p->next;
	p->next = z;


}

int main()
{
	Link* L = new Link;
	L->next = new Link;
	L->next->next = new Link;
	L->next->next->next = new Link;
	L->next->next->next->next = new Link;
	L->next->next->next->next->next = NULL;

	L->data = 1;
	L->next->data = 2;
	L->next->next->data = 3;
	L->next->next->next->data = 4;
	L->next->next->next->next->data = 5;

	Link* K = new Link;
	K->next = new Link;
	K->next->next = new Link;
	K->next->next->next = new Link;
	K->next->next->next->next = new Link;
	K->next->next->next->next->next = new Link;
	K->next->next->next->next->next->next = NULL;

	K->data = 1;
	K->next->data = 2;
	K->next->next->data = 3;
	K->next->next->next->data = 4;
	K->next->next->next->next->data = 5;
	K->next->next->next->next->next->data = 6;


	DeleteAndInsertSub(L, K, 2, 5, 2);


	while (L->next != NULL)
	{
		cout << L->data;
		L = L->next;

	}
	cout << L->data;

	while (K->next != NULL)
	{
		cout << K->data;
		K = K->next;

	}
	cout << K->data;


	return 0;
}*/