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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* L = new ListNode(0);
		L->next = head;
		ListNode* p = L;
		ListNode* q;
		while (p->next != NULL)
		{
			if (p->next->val == val)
			{
				q = p->next;
				p->next = p->next->next;
				delete q;
			}
			else
			{
				p = p->next;
			}
		}
		return L->next;
	}
};