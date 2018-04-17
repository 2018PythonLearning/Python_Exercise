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
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		if (lists.empty())
		{
			return NULL;
		}
		ListNode *L = new ListNode(0);
		L->next = lists[0];
		ListNode *p = L;
		ListNode *q;
		ListNode *x;
		for (int i = 1; i < lists.size(); i++)
		{
			while (p->next != NULL)
			{
				p = p->next;
			}
			p->next = lists[i];
		}
		p = L;
		q = L;
		while (p->next != NULL)
		{
			if (p->val > p->next->val)
			{
				while (p->next->val > q->next->val)
				{
					q = q->next;
				}
				if (p->next == q->next)
				{
					p = p->next;
				}
				else
				{
					x = p->next;
					p->next = p->next->next;
					x->next = q->next;
					q->next = x;

				}
			}

			else
			{
				p = p->next;
			}

			q = L;
		}

		return L->next;
	}
};