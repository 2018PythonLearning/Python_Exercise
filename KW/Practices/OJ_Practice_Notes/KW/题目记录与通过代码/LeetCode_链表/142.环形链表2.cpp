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
	ListNode *detectCycle(ListNode *head) {
		if (head == NULL)
		{
			return NULL;
		}
		if (head == head->next)
		{
			return head;
		}
		int i = 0;
		ListNode* p;
		ListNode* q;
		q = head;
		p = head->next;

		while (p != q  && p != NULL && p->next != NULL)
		{
			p = p->next->next;
			q = q->next;
		}

		if (p == q)
		{
			p = p->next;
			while (p != q)
			{
				p = p->next;
				i++;
			}
			q = head;
			while (true)
			{
				for (int n = 0; n < i + 1; n++)
				{
					if (p == q)
					{
						return p;
					}
					p = p->next;
				}
				q = q->next;
			}
		}
		else
		{
			return NULL;
		}
	}
};