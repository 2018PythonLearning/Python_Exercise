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
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* p = L;
		ListNode* q;
		int i = 0;
		while (p->next != NULL)
		{
			while (p->next->next != NULL && p->next->val == p->next->next->val)
			{
				q = p->next;
				p->next = p->next->next;
				delete q;
				i = 1;
			}
			if (i == 1)
			{
				q = p->next;
				p->next = p->next->next;
				delete q;
			}
			else
			{
				p = p->next;
			}
			i = 0;
		}
		return L->next;
	}
};