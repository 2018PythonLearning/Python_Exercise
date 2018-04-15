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
	void reorderList(ListNode* head) {
		ListNode* p = head;
		ListNode* q = head;
		while (p != NULL && p->next != NULL && p->next->next != NULL)
		{

			while (q->next->next != NULL)
			{
				q = q->next;
			}

			q->next->next = p->next;
			p->next = q->next;
			q->next = NULL;
			p = p->next->next;
			q = p;
		}
	}
};