/*Status EnQueue(SqQueue *Q, QElemType e)
{
	if ((Q->rear + 1) % MAXQSIZE == Q->front)
	{
		return ERROR;
	}
	if (e < Q->base[Q->front])
	{
		Q->front = (Q->front + MAXQSIZE - 1) % MAXQSIZE;
		Q->base[Q->front] = e;
	}
	else
	{
		Q->rear = (Q->rear + 1) % MAXQSIZE;
		Q->base[Q->rear] = e;
	}
	return OK;
}

Status DeQueue(SqQueue *Q, QElemType &e)
{
	if (Q->front == Q->rear)
	{
		return ERROR;
	}
	e = Q->base[Q->front];
	Q->front = (Q->rear + 1) % MAXQSIZE;
}*/