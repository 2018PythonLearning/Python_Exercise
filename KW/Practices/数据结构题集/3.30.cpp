/*Status EnQueue(SqQueue* Q, QElemType e)
{
	if ((Q->rear + Q->length) % MAXQSIZE = Q->rear)
	{
		return ERROR;
	}
	Q->rear++;
	Q->length++;
	Q->base[Q->rear] = e;
}

Status DeQueue(SqQueue* Q, QElemType &e)
{
	if (Q->length == 0)
	{
		return ERROR;
	}
	int front = (Q->base + MAXQSIZE - Q->length) % MAXQSIZE;
	e = Q->base[front];
	Q->length--;
}
*/