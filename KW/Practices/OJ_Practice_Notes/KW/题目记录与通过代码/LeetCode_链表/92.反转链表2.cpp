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
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* p = L;
		ListNode* q = L;
		ListNode* x;
		int t = 0;
		for (int i = 1; i < m; i++)
		{
			p = p->next;
		}
		for (int i = 0; i < n; i++)
		{
			q = q->next;
		}

		t = n - m;


		for (int i = 0; i < t; i++)
		{
			x = p->next;
			p->next = p->next->next;
			x->next = q->next;
			q->next = x;

		}

		return L->next;
	}
};