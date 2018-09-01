/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int DELETE(Link** L, int i)
{
	if (i <= 0)
	{
		return 0;
	}
	Link* q = *L;
	//带头结点的在此处添加：q = q->next
	if (i == 1)
	{
		*L = (*L)->next;
		delete q;
	}
	else
	{
		int n = 2;
		while (n < i)
		{
			q = q->next;
			n++;
		}
		Link* p = q->next;
		q->next = q->next->next;
		delete p;
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
	L->next->next->next->next->next = NULL;

	L->data = 1;
	L->next->data = 2;
	L->next->next->data = 3;
	L->next->next->next->data = 4;
	L->next->next->next->next->data = 5;


	DELETE(&L, 2);

	while (L->next != NULL)
	{
		cout << L->data;
		L = L->next;

	}
	cout << L->data;




	return 0;
}*/