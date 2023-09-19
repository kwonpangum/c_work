#include "stack.h"

void push(Stack s, int data)
{
	//stack[tos] = data;
	//++tos;
	
	s.array[s.tos] = data;  // 구조체 안에 있는 변수를 쓰기 위해 
	++s.tos;
}

int pop (Stack s)
{
	--s.tos;
	return s.array[s.tos];
}

