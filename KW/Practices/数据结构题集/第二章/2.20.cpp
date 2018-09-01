/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int DELETE(Link* L)
{
	if (L->next == NULL)
	{
		return 0;
	}
	Link* q = L;
	while (q->next != NULL)
	{
		if (q->next->data == q->data)
		{
			Link* p = q->next;
			q->next = q->next->next;
			delete p;
		}
		q = q->next;
	}

	return 1;

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
	L->next->next->next->data = 2;
	L->next->next->next->next->data = 4;
	L->next->next->next->next->next->data = 5;


	DELETE(L);


	while (L->next != NULL)
	{
		L = L->next;
		cout << L->data;
	}


	return 0;
}*/