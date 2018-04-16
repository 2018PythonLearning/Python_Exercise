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
	ListNode* oddEvenList(ListNode* head) {
		ListNode* L = new ListNode(0);
		ListNode* K = new ListNode(0);
		ListNode* l = L;
		ListNode* k = K;
		int i = 1;
		while (head != NULL)
		{
			if (i % 2 == 1)
			{
				l->next = head;
				head = head->next;
				l = l->next;
			}
			else
			{
				k->next = head;
				head = head->next;
				k = k->next;
			}
			i++;

		}
		l->next = K->next;
		k->next = NULL;
		delete K;
		return L->next;
	}
};