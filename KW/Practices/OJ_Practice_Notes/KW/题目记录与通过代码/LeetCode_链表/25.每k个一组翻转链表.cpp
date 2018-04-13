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
	ListNode* reverseKGroup(ListNode* head, int k) {
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* p = L;
		ListNode* q = L;
		ListNode* x;
		int i = 0;
		while (q->next != NULL)
		{
			for (i = 0; i < k; i++)
			{
				if (q->next != NULL)
				{
					q = q->next;
				}
				else
				{
					break;
				}
			}
			if (i < k)
			{

			}
			else
			{
				for (i = 1; i < k; i++)
				{
					x = p->next;
					p->next = p->next->next;
					x->next = q->next;
					q->next = x;

				}
				for (i = 1; i < k; i++)
				{
					q = q->next;

				}
				for (i = 0; i < k; i++)
				{
					p = p->next;

				}
			}
		}
		return L->next;
	}
};