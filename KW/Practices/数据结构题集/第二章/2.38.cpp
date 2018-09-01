#include<iostream>
using namespace std;
/*

struct Link
{
	int data;
	Link * next;
	Link * prior;
	int freq;
};

int LOCATE(Link* L,int i)
{
	Link* q = L;
	Link* p;
	while (q->data != i)
	{
		q = q->next;
		if (q == L)
		{
			return 0;
		}
	}
	q->freq++;
	p = q;
	p = p->prior;
	while (p->freq < q->freq && p != L)
	{
		p = p->prior;
	}
	
	q->next->prior = q->prior;
	q->prior->next = q->next;

	p->next->prior = q;
	q->next = p->next;
	p->next = q;
	q->prior = p;

	

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

	L->next->freq = 0;
	L->next->next->freq = 0;
	L->next->next->next->freq = 0;
	L->next->next->next->next->freq = 0;
	L->next->next->next->next->next->freq = 0;

	L->prior = L->next->next->next->next->next;
	L->next->prior = L;
	L->next->next->prior = L->next;
	L->next->next->next->prior = L->next->next;
	L->next->next->next->next->prior = L->next->next->next;
	L->next->next->next->next->next->prior = L->next->next->next->next;


	LOCATE(L, 5);
	LOCATE(L, 4);
	LOCATE(L, 4);



	for (int i = 0; i < 6; i++)
	{
		L = L->next;
		cout << L->data << "\n";
	}

	return 0;
}
*/
