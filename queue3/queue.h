#ifndef QUEUE_H
#define QUEUE_H
#define ARRAYSIZE 100

typedef struct queue {
	int array[ARRAYSIZE];
	int front;
	int rear;
} Queue;

void initQueue(Queue *pq);

void push(Queue *pq, int value);
int pop(Queue *pq);

#endif
