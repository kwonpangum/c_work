#include "stack.h"

void push(Stack *ps, int data)
{
	//stack[tos] = data;
	//++tos;
	
	ps->array[ps->tos] = data;  // 구조체 안에 있는 변수를 쓰기 위해 
	++ps->tos;
}

int pop (Stack *ps)
{
	--ps->tos;
	return ps->array[ps->tos];
}

