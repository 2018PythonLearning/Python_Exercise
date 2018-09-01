/*
Status EnQueue(SqQueue *Q, QElemType e)
{
	if (Q->rear == Q->front && Q->tag == 1)
	{
		return ERROR;
	}
	Q->base[Q->rear] = e;
	Q->rear++;
	Q->rear = Q->rear % MAXQSIZE;
	if (Q->rear == Q->front)
	{
		Q->tag = 1;
	}
	return OK;
}
Status DeQueue(SqQueue *Q, QElemType& e)
{
	if (Q->rear == Q->front && Q->tag == 0)
	{
		return ERROR;
	}
	Q->front++;
	Q->front = Q->front % MAXQSIZE;
	e = Q->base[Q->front];
	if (Q->rear == Q->front)
	{
		Q->tag = 0;
	}
	return OK;
}
*/