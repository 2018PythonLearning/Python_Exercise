/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL)
			return NULL;
		int x = 0;
		int y = 0;
		ListNode *a = headA;
		ListNode *b = headB;


		while (a->next != NULL)
		{
			a = a->next;
			x++;
		}
		while (b->next != NULL)
		{
			b = b->next;
			y++;
		}
		if (a != b)
		{
			return NULL;
		}
		x++;
		y++;

		a = headA;
		b = headB;
		if (x >= y)
		{
			for (int i = 0; i < x - y; i++)
			{
				a = a->next;
			}
		}
		else
		{
			for (int i = 0; i < y - x; i++)
			{
				b = b->next;
			}
		}
		while (a != b)
		{
			a = a->next;
			b = b->next;
		}
		return a;
	}
};