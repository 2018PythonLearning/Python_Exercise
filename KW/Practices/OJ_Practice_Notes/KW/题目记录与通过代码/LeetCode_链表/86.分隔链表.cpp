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
	ListNode* partition(ListNode* head, int x) {
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* z = new ListNode(0);
		ListNode* c = new ListNode(0);
		ListNode* q = z;
		ListNode* p = c;

		while (L->next != NULL)
		{
			if (L->next->val < x)
			{
				p->next = L->next;
				L->next = L->next->next;
				p = p->next;
				p->next = NULL;
			}
			else
			{
				q->next = L->next;
				L->next = L->next->next;
				q = q->next;
				q->next = NULL;
			}
		}
		p->next = z->next;
		delete z, L;
		return c->next;
	}
};