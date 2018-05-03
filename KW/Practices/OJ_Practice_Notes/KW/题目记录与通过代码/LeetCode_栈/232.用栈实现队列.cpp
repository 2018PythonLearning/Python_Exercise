class MyQueue {
private:
	stack<int> q1;
	stack<int> q2;
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		q2.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int n = 0;
		int t = q2.size();
		for (int i = 0; i < t; i++)
		{
			q1.push(q2.top());
			q2.pop();
		}
		n = q1.top();
		q1.pop();
		t = q1.size();
		for (int i = 0; i < t; i++)
		{
			q2.push(q1.top());
			q1.pop();
		}
		return n;
	}

	/** Get the front element. */
	int peek() {
		int n = 0;
		int t = q2.size();
		for (int i = 0; i < t; i++)
		{
			q1.push(q2.top());
			q2.pop();
		}
		n = q1.top();
		t = q1.size();
		for (int i = 0; i < t; i++)
		{
			q2.push(q1.top());
			q1.pop();
		}
		return n;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (q2.size())
		{
			return false;
		}
		return true;
	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/