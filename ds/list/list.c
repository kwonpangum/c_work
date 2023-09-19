#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;  // 자기참조 구조체 ( self reference strcut)
} Node;

int main (void)
{
	Node *ptr;
	ptr = malloc(sizeof(Node));
	// assert(ptr );
	
	ptr->data =1;
	ptr->next = malloc(sizeof(Node));
	
	ptr->next->data = 3;
	ptr->next->next = malloc(sizeof(Node));
	
	ptr->next->next->data = 4;
	ptr->next->next->next = NULL;

	// insert
	Node *tmp;
	tmp = malloc(sizeof(Node));
	tmp->data = 2;
	tmp->next = ptr->next;
	ptr->next = tmp;
	
	//delete node 3
	tmp = ptr->next->next;
	ptr->next->next = tmp->next;
	free(tmp);
	
	Node *p = ptr;
	while (p != NULL) {
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("\n");

	//circluate
	p = ptr;
	while (p) {
		Node *p2 = p; 
		p = p->next;
		free(p2);
	}
	
	return 0;
}
