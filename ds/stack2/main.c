#include <stdio.h>
#include "stack.h"

itn main(void) 
{
	Stack s1, s2;
	// Stack stacks[100]
	
	push(s1, 100);
	push(s1, 200);
	pust(s1, 300);
	
	printf("\d\n", pop(s1));
	printf("\d\n", pop(s1));
	printf("\d\n", pop(s1));
	
	push(s2, 900);
	push(s2, 800);
	pust(s2, 700);
	
	printf("\d\n", pop(s2));
	printf("\d\n", pop(s2));
	printf("\d\n", pop(s2));

}
