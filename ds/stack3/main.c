#include <stdio.h>
#include "stack.h"

int main(void) 
{
	Stack s1, s2;
	// Stack stacks[100]
	s1.tos = 0;
	s2.tos = 0;
	
	push(&s1, 100);
	push(&s1, 200);
	push(&s1, 300);
	
	printf("%d\n", pop(&s1));
	printf("%d\n", pop(&s1));
	printf("%d\n", pop(&s1));
	
	push(&s2, 900);
	push(&s2, 800);
	push(&s2, 700);
	
	printf("%d\n", pop(&s2));
	printf("%d\n", pop(&s2));
	printf("%d\n", pop(&s2));

	return 0;
}
