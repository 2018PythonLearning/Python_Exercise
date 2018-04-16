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
	ListNode* reverseList(ListNode* head) {
		ListNode* L = new ListNode(0);
		ListNode* p;
		while (head != NULL)
		{
			p = L->next;
			L->next = head;
			head = head->next;
			L->next->next = p;
		}
		return L->next;
	}
};