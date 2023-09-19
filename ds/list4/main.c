#include <stdio.h>
#include "list.h"

void printInt(const void *p)
{
	printf("%d", *(int *)p);
}

void printDouble(const void *p)
{
	printf("%f", *(double *)p);
}


int main(void) 
{	
	List list, list2;
	initList(&list, sizeof(int));
	initList(&list2, sizeof(double));
	
	int i = 4; 	insertFirstNode(&list, &i);
	i = 3;	insertFirstNode(&list, &i);
	i = 1;	insertFirstNode(&list, &i);
	
	int j = 1;
	i = 2;	insertNode(&list, &j, &i);
	
	i = 3;	deleteNode(&list, &i);
	printList(&list, printInt);
	
	double d = 4.4; 	insertFirstNode(&list2, &d);
	d = 3.3; 	insertFirstNode(&list2, &d);
	d = 1.1; 	insertFirstNode(&list2, &d);
	
	double f = 1.1;
	d = 2.2; 	insertNode(&list2, &f, &d);
	
	i = 3.3; 	insertNode(&list2, &d, &i);
	printList(&list2, printDouble);
	
	cleanupList(&list);
	cleanupList(&list2); 
	return 0;
}
