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
	ListNode* rotateRight(ListNode* head, int k) {
		if (head == NULL || k == 0)
		{
			return head;
		}
		int n = 0;
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* q = L;
		ListNode* p = L;
		ListNode* x = L;
		while (x->next != NULL)
		{
			x = x->next;
			n++;
		}
		if (k % n == 0)
		{
			return head;
		}
		for (int i = 0; i < (k % n); i++)
		{
			q = q->next;
		}
		while (q->next != NULL)
		{
			q = q->next;
			p = p->next;
		}
		x = p->next;
		p->next = NULL;
		q->next = L->next;
		L->next = x;

		return L->next;
	}
};