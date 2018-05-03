class MyStack {
private:
	queue<int> q1;
	queue<int> q2;
	int n;
public:
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		if (q1.empty())
		{
			q2.push(x);
		}
		else
		{
			q1.push(x);
		}
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		if (q1.empty())
		{
			n = q2.size();
			for (int i = 1; i < n; i++)
			{
				q1.push(q2.front());
				q2.pop();
			}
			n = q2.front();
			q2.pop();
			return n;
		}
		else
		{
			n = q1.size();
			for (int i = 1; i < n; i++)
			{
				q2.push(q1.front());
				q1.pop();
			}
			n = q1.front();
			q1.pop();
			return n;
		}
	}

	/** Get the top element. */
	int top() {
		if (q1.empty())
		{
			n = q2.size();
			for (int i = 1; i < n; i++)
			{
				q1.push(q2.front());
				q2.pop();
			}
			n = q2.front();
			q1.push(q2.front());
			q2.pop();
			return n;
		}
		else
		{
			n = q1.size();
			for (int i = 1; i < n; i++)
			{
				q2.push(q1.front());
				q1.pop();
			}
			n = q1.front();
			q2.push(q1.front());
			q1.pop();
			return n;
		}
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		if (q1.size() == 0 && q2.size() == 0)
		{
			return true;
		}
		return false;
	}
};

/**
* Your MyStack object will be instantiated and called as such:
* MyStack obj = new MyStack();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.top();
* bool param_4 = obj.empty();
*/