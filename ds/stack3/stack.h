#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

/*
struct stack {
	int array[100];
	int tos;
};
*/

typedef struct stack {
	int array[ARRAYSIZE];
	int tos;
} Stack;


void push(struct stack *ps, int data);

int pop(struct stack *ps);

#endif
