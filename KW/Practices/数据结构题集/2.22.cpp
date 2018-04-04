#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

void reverse(Link *L)
{
	Link* K = new Link;
	K->next = NULL;
	Link* p;
	while (L->next!= NULL)
	{
		p = L->next;
		L->next = L->next->next;
		p->next = K->next;
		K->next = p;



	}
	L->next = K->next;
	delete K;
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

	reverse(L);

	while (L->next != NULL)
	{
		L = L->next;
		cout << L->data;
	}





	return 0;
}