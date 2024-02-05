#include <stdio.h>
#include <stdlib.h>

typedef struct my_double_node{
	struct my_double_node * prev;
	int data;
	struct my_double_node *next;
}my_node;

int main()
{
   	 printf("Hello World\n");
    	 my_node * head = malloc(sizeof (my_node));
   	 head->data = 35;
	head->prev = NULL;
   	 head->next = NULL;
	

	my_node *ptr = malloc(sizeof(my_node));
	ptr->prev = head;
	ptr-> data = 35;
	ptr -> next = NULL;
	head -> next = ptr;
	ptr = malloc(sizeof(my_node));
	ptr-> data = 15;
	ptr -> prev = head -> next;
	ptr -> next = NULL;
	head -> next -> next = ptr;

	ptr = malloc(sizeof(my_node));
	ptr -> data = 67;
	ptr -> prev = head -> next -> next;
	ptr -> next = NULL;
	head->next->next->next = ptr; // Link the fourth node

my_node * tmp = head;
int count = 1;
while (tmp != NULL)
{	
	printf("node %d: %d \n", count, tmp->data);
	tmp = tmp->next;
	count++;
}
return 0;
} 
