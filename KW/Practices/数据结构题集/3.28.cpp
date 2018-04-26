/*
void InitQueue(LinkQueue* Q)
{
	Q->rear = new QNode;
	Q->rear->next = Q->next;
}

void EnQueue(LinkQueue* Q, QElemType e)
{
	QNode q = new QNode;
	q->date = e;
	q->next = Q->rear->next;
	Q->rear->next = q;
	Q->rear = Q->rear->next;
}

Status DeQueue(LinQueue* Q, QElemType &e)
{
	if (Q->rear == q->rear->next)
	{
		return ERROR;
	}
	QNode q = Q->rear->next->next;
	Q->rear->next->next = Q->rear->next->next->next;
	e = q->date;
	if (q == Q->rear)
	{
		Q->rear = Q->rear->next;
	}
	delete q;
	return OK;
}


*/