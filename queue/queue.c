#include <stdio.h>

int queue[100];
int front;
int rear;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int result = queue[front];
	++front;
	return result;
	
}

int main (void)
{
	push(100);
	push(200);
	push(300);
	
	printf("1st pop() : %d\n", pop());
	
	push(300);
	
	printf("2nd pop() : %d\n", pop());
	printf("3rd pop() : %d\n", pop());
	
	return 0;
}
