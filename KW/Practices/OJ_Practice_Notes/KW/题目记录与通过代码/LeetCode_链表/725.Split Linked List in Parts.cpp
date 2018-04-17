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
	vector<ListNode*> splitListToParts(ListNode* root, int k) {
		vector<ListNode*> l(k);
		ListNode* p = root;
		ListNode* q;
		int x = 0;
		while (p != NULL)
		{
			p = p->next;
			x++;
		}
		int y = x % k;
		x = x / k;
		p = root;

		if (x == 0)
		{
			for (int i = 0; i < k; i++)
			{
				l[i] = p;
				if (p != NULL)
				{
					p = p->next;
					l[i]->next = NULL;
				}

			}
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				l[i] = p;
				q = l[i];
				p = p->next;
				for (int n = 1; n < x; n++)
				{
					q->next = p;
					p = p->next;
					q = q->next;
				}

				if (y > 0)
				{
					q->next = p;
					p = p->next;
					q = q->next;
					y--;
				}

				q->next = NULL;
			}
		}
		return l;
	}
};