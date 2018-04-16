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
	bool isPalindrome(ListNode* head) {
		if (head == NULL || head->next == NULL)
		{
			return true;
		}
		ListNode* L = new ListNode(0);
		ListNode* K = new ListNode(0);
		L->next = head;
		ListNode* l = L;
		ListNode* k = K;
		int x = 0;
		ListNode* p;
		while (l->next != NULL)
		{
			x++;
			l = l->next;
		}
		l = L;
		if (x % 2 == 0)
		{
			for (int i = 0; i < x / 2; i++)
			{
				p = k->next;
				k->next = L->next;
				L->next = L->next->next;
				k->next->next = p;
			}
			for (int i = 0; i < x / 2; i++)
			{
				if (k->next->val != l->next->val)
				{
					cout << "a";
					return false;
				}
				else
				{
					k = k->next;
					l = l->next;
				}
			}
		}
		else
		{
			for (int i = 0; i < x / 2; i++)
			{
				p = k->next;
				k->next = L->next;
				L->next = L->next->next;
				k->next->next = p;
			}
			l = l->next;
			for (int i = 0; i < x / 2; i++)
			{
				if (k->next->val != l->next->val)
				{
					return false;
				}
				else
				{
					k = k->next;
					l = l->next;
				}
			}
		}
		return true;
	}
};