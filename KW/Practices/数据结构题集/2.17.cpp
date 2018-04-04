/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int INSERT(Link* L, int i, Link* b)
{
	if ( i <= 0) 
	{
		return 0;
	}
	Link* q = L;		
	//带头结点的在此处添加：q = q->next
	int n = 1;
	while (n < i) 
	{
		q = q->next;
		n++;
	}
	b->next = q->next;
	q->next = b;
	return 1;
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
	K->data = 1;
	K->next = NULL;




	INSERT(L, 2, K);


	while (L->next != NULL)
	{
		cout << L->data;
		L = L->next;

	}
	cout << L->data;




	return 0;
}*/