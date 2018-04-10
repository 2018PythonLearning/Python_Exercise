/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
	Link * prior;
};

void change(Link* L)
{
	Link* p = L;
	Link* q = L;
	Link* z;
	Link* x;
	while (p->next != q->prior)
	{
		p = p->next;
		z = p->next->next;
		x = q->prior;

		q->prior->next = p->next;
 		q->prior = p->next;
		p->next = z;
		p->next->prior = p;
		q->prior->next = q;
		q->prior->prior = x;
		q = q->prior;

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
	L->next->next->next->next->next->next = L;
	L->next->data = 1;
	L->next->next->data = 2;
	L->next->next->next->data = 3;
	L->next->next->next->next->data = 4;
	L->next->next->next->next->next->data = 5;

	L->prior = L->next->next->next->next->next;
	L->next->prior = L;
	L->next->next->prior = L->next;
	L->next->next->next->prior = L->next->next;
	L->next->next->next->next->prior = L->next->next->next;
	L->next->next->next->next->next->prior = L->next->next->next->next;


	change(L);


	for (int i = 0; i < 6; i++)
	{
		L = L->next;
		cout << L->data << "\n";
	}

	return 0;
}
*/