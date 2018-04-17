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
	int numComponents(ListNode* head, vector<int>& G) {
		int x = 0;
		int y = 0;
		while (head != NULL)
		{
			for (int i = 0; i < G.size(); i++)
			{
				if (head->val == G[i])
				{
					head = head->next;
					y++;

					if (head == NULL)
					{
						break;

					}
					i = -1;
				}
			}
			if (y > 0)
			{
				x++;
			}

			if (head != NULL)
			{

				head = head->next;

			}

			y = 0;

		}
		return x;
	}
};