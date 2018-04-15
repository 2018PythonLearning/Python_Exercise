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
	ListNode* insertionSortList(ListNode* head) {
		if (head == NULL)
		{
			return head;
		}
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* p = L;
		ListNode* q = L;
		ListNode* x;
		p = p->next;
		while (p->next != NULL)
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
			q = L;
		}
		return L->next;
	}
};