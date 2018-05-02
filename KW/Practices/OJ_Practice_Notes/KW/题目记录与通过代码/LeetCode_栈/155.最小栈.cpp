class MinStack {
private:
	struct node
	{
		int data;
		node* next;
	};
	int min;
	node* tp;
public:
	/** initialize your data structure here. */
	MinStack() {
		min = 2147483647;
		tp = NULL;
	}

	void push(int x) {
		node* n = new node;
		n->next = tp;
		n->data = x;
		tp = n;
		if (x < min)
		{
			min = x;
		}
	}

	void pop() {
		int i = tp->data;
		node* n = tp;
		tp = tp->next;
		delete n;
		n = tp;
		if (i == min)
		{
			min = 2147483647;
			while (n != NULL)
			{
				if (n->data < min)
				{
					min = n->data;
				}
				n = n->next;
			}
		}



	}

	int top() {
		return tp->data;
	}

	int getMin() {
		return min;
	}
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(x);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/