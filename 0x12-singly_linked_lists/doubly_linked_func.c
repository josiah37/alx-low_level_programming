#include <stdio.h>
#include <stdlib.h>

typedef struct doubly_linked_node{
	int data;
	struct doubly_linked_node *prev;
	struct doubly_linked_node *next;
}my_d_node;

   my_d_node * create_a_node(int data)
      {
	my_d_node * new_node = malloc(sizeof(my_d_node));
	new_node -> data = data;
	new_node -> prev = NULL;
	new_node -> next = NULL;
	return new_node;
      }


my_d_node *add_atbig(my_d_node * head, int data)
{
	my_d_node * new_node = malloc(sizeof(my_d_node));
        new_node -> data = data;
	new_node -> prev = NULL;
	new_node -> next = NULL;
	new_node -> next = head;
	head-> prev = new_node;
	head = new_node;
	return(head);
}

my_d_node *add_at_end(my_d_node * head, int data)
{
	my_d_node * new_node = malloc(sizeof(my_d_node));
        new_node -> data = data;
	new_node -> prev = NULL;
	new_node -> next = NULL;
	my_d_node *ptr = head;
	while (ptr-> next != NULL)
		ptr = ptr -> next;
	ptr-> next = new_node;
	new_node -> prev = ptr;
}

my_d_node * print_rev(my_d_node *head)
{
	my_d_node *trv = head;
	/*triversing till we reach at end*/
	while (trv-> next != NULL)
		trv = trv -> next;
	
	printf("\nreversing the list\n");
	while (trv->prev != NULL)
	{
		printf("%d ",trv->data );
		trv = trv-> prev;
	}
/*the above would not print the lastor 1st elemnt because the conditon will be fulfild tho it triverse it so i printd it out side of the loop*/
	printf("%d ",trv->data );	

}


int main()
{
	//my_d_node * head = NULL;
	my_d_node *head = create_a_node(45);
//	printf("node:%d\n", head-> data);
	
	head = add_atbig(head, 22);
	add_at_end(head, 351);
	add_at_end(head, 911);
	head = add_atbig(head, 7);
	/*printing my list*/
	my_d_node* trav = head;
	int count = 0;

	while(trav != NULL)
	{
		printf("%d ", trav-> data);
		count = count + trav -> data;
		trav = trav-> next;
	}
	printf("\nTotal  sum of data: %d\n", count);
	
	print_rev(head);
	return (0);
}
