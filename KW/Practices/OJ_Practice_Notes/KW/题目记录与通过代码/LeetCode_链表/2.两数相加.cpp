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
		ListNode *l3 = new ListNode(0);

		ListNode* p = l3;
		ListNode* p1 = l1;
		ListNode* p2 = l2;
		while (p1 != NULL && p2 != NULL)
		{
			if (p->next == NULL)
			{
				p->next = new ListNode(0);
			}

			p->next->val += (p1->val + p2->val);

			if (p->next->val >= 10)
			{
				p->next->val %= 10;
				p->next->next = new ListNode(0);
				p->next->next->val += 1;
			}

			p = p->next;
			p1 = p1->next;
			p2 = p2->next;

		}
		while (p1 != NULL || p2 != NULL)
		{
			if (p1 == NULL)
			{
				if (p->next == NULL)
				{
					p->next = new ListNode(0);
					p->next->val = p2->val;
				}
				else
				{
					p->next->val += p2->val;
					if (p->next->val >= 10)
					{
						p->next->val %= 10;
						p->next->next = new ListNode(0);
						p->next->next->val += 1;
					}
				}
				p = p->next;
				p2 = p2->next;
			}
			else if (p2 == NULL)
			{
				if (p->next == NULL)
				{
					p->next = new ListNode(0);
					p->next->val = p1->val;
				}
				else
				{
					p->next->val += p1->val;
					if (p->next->val >= 10)
					{
						p->next->val %= 10;
						p->next->next = new ListNode(0);
						p->next->next->val += 1;
					}
				}
				p = p->next;
				p1 = p1->next;
			}
		}



		return l3->next;
	}
};
