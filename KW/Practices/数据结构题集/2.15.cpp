/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void append(Link *L, Link *K)
{
	while (L->next != NULL)
	{
		L = L->next;
	}
	L->next = K->next;
//	delete K;
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



	append(L, K);

	while (L->next != NULL)
	{
		L = L->next;
		cout << L->data;
	}





	return 0;
}*/