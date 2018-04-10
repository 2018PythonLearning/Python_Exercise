/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
	Link * prior;
};

void Prior(Link* L)
{
	Link* p;
	Link* q;
	p = L;
	p->next->prior = p;
	while (p->next != L)
	{
		p = p->next;
		p->next->prior = p;

	}

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

	Prior(L);

	for (int i = 0; i < 6; i++)
	{
		cout << L->data;
		L = L->prior;

	}

	return 0;
}
*/