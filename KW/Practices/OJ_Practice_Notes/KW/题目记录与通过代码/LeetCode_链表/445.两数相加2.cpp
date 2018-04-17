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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* L = new ListNode(0);
		ListNode* p1 = l1;
		ListNode* p2 = l2;
		ListNode* q = L;
		ListNode* p = L;
		ListNode* z;
		int x = 0;
		int y = 0;
		while (p1 != NULL)
		{
			p1 = p1->next;
			x++;
		}
		while (p2 != NULL)
		{
			p2 = p2->next;
			y++;
		}
		p1 = l1;
		p2 = l2;
		if (x >= y)
		{
			for (int i = 0; i < x - y; i++)
			{
				q = L->next;
				L->next = new ListNode(0);
				L->next->val = p1->val;
				p1 = p1->next;
				L->next->next = q;
			}
		}
		else
		{
			for (int i = 0; i < y - x; i++)
			{
				q = L->next;
				L->next = new ListNode(0);
				L->next->val = p2->val;
				p2 = p2->next;
				L->next->next = q;
			}
		}


		while (p1 != NULL)
		{
			q = L->next;
			L->next = new ListNode(0);
			L->next->val = p1->val + p2->val;
			p1 = p1->next;
			p2 = p2->next;
			L->next->next = q;
		}
		q = L;




		while (q->next != NULL)
		{
			if (q->next->val >= 10)
			{
				if (q->next->next == NULL)
				{
					q->next->next = new ListNode(0);
				}
				q->next->next->val++;
				q->next->val -= 10;
			}
			q = q->next;
		}
		while (p->next != q)
		{
			z = p->next;
			p->next = p->next->next;
			z->next = q->next;
			q->next = z;
		}
		return L->next;
	}
};