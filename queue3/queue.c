#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

void initQueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
}

void push(Queue *pq, int data)
{
	if (pq->rear == ARRAYSIZE) {
		fprintf(stderr, "Queue is full.\n");
		exit(1);
	}
	pq->array[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
	if (pq->front == pq->rear) {
		fprintf(stderr, "Queue is empty.\n");
		exit(2);
	}

	int result = pq->array[pq->front];
	++pq->front;
	
	return result;
}
