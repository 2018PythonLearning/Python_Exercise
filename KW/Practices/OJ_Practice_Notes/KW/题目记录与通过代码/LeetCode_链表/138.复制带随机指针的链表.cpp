/**
* Definition for singly-linked list with a random pointer.
* struct RandomListNode {
*     int label;
*     RandomListNode *next, *random;
*     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
* };
*/
class Solution {
public:
	RandomListNode *copyRandomList(RandomListNode *head) {
		RandomListNode* L = new RandomListNode(0);
		RandomListNode* K = new RandomListNode(0);
		RandomListNode* p;
		RandomListNode* q;
		L->next = head;
		p = L;
		while (p->next != NULL)
		{
			q = p->next->next;
			p->next->next = new RandomListNode(0);
			p->next->next->next = q;
			p->next->next->label = p->next->label;
			p->next->next->random = p->next->random;
			p = p->next->next;
		}
		q = K;
		p = L;
		while (p->next != NULL)
		{
			if (p->next->next->random != NULL)
			{
				p->next->next->random = p->next->next->random->next;
			}
			p = p->next->next;
		}
		p = L;
		while (p->next != NULL)
		{
			q->next = p->next->next;
			p->next->next = p->next->next->next;

			p = p->next;
			q = q->next;
		}

		q->next = NULL;

		return K->next;
	}
};