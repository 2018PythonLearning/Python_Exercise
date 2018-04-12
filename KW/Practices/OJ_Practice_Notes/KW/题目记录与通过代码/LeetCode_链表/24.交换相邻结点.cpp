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
	ListNode* swapPairs(ListNode* head) {
		ListNode* y = new ListNode(0);
		ListNode* p = y;
		ListNode* q;
		ListNode* x;
		p->next = head;
		if (head == NULL)
		{

		}
		else if (head->next == NULL)
		{

		}
		else
		{
			while (p->next != NULL)
			{
				if (p->next->next == NULL)
				{
					p = p->next;
				}
				else
				{
					q = p->next->next->next;
					x = p->next;
					p->next = p->next->next;
					p->next->next = x;
					p = p->next;
					p = p->next;
					p->next = q;
				}

			}
		}


		return y->next;
	}
};