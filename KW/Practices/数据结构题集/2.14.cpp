/*#include<iostream>
using namespace std;


struct Link
{
	int data;
	Link * next;
};

int LENGTH(Link *L)
{
	int i = 0;
	while (L->next != NULL)
	{
		L = L->next;
		i++;
	}
	return i;
}


int main()
{
	Link* L = new Link;
	L->next = new Link;
	L->next->next = new Link;
	L->next->next->next = new Link;
	L->next->next->next->next = new Link;
	L->next->next->next->next->next = new Link;
	L->next->next->next->next->next ->next = NULL;
	L->next->data = 1;
	L->next->next->data = 2;
	L->next->next->next->data = 3;
	L->next->next->next->next->data = 4;
	L->next->next->next->next->next->data = 5;


	int i = LENGTH(L);

	cout << i;



	return 0;
}*/