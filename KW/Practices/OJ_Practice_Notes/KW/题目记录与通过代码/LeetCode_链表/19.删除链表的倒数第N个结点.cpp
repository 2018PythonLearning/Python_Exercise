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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* p = head;
		ListNode* q = head;
		ListNode* x;
		for (int i = 0; i<n; i++)
		{
			p = p->next;
		}
		if (p == NULL)
		{
			x = head;
			head = head->next;
			delete x;
		}
		else
		{
			while (p->next != NULL)
			{
				p = p->next;
				q = q->next;
			}
			x = q->next;
			q->next = q->next->next;
			delete x;
		}
		return head;
	}
};