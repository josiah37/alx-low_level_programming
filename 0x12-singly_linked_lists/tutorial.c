/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct my_nodeoo{
    int data;
    struct my_nodeoo * link;
}my_node;

int main()
{
    printf("Hello World\n");
    
    my_node * head = malloc(sizeof (my_node));
	printf("the adress of the 0  node is %p\n", head);
    head->data = 35;
    head->link = NULL;
    
    printf("the 1st value inmy nod is %d\n", head-> data);
    printf("i can also print it like:    1st val: %d\n", (*head).data);
    printf("the link part of the 1st node is %p\n",head->link );
	puts("\n -- NEW LINE --\n");


					/*creating second node*/

	/*creating a pointer to create and acess the 2nd node*/
	my_node * next_node;
	printf("the adress of the second node is %p\n", &next_node);
	/*CREATING A new node and allocating to the pointer (for it to be accessed though it)*/
	next_node = malloc(sizeof(my_node));
	printf("the adress of the second node is same?  %p\n", next_node);
	/*two ways of writing it */
	next_node->data = 11;
	(*next_node).link = NULL;
	/*now an independet node is created with it own data. we need to link them now by*/
	head->link = next_node;
	printf("the link part of the 1st node is %p\n",head->link );
						/*creating the 3rd node*/

	/*we can use another pointer to create and access the node but it is mempry wastage we can use the 
	  pointer we used above agian
	*/
	next_node = malloc(sizeof(my_node));
	printf("the adress of the 3rd node is %p\n", next_node);
	next_node-> data = 56;
	next_node -> link = NULL; /*we always should put this to null and update it below(letter)if we have another node*/

	/*3rd node created we link it by*/
	
	head-> link -> link = next_node; // this means head -> link is the adress of the 2nd node. and the link part of
					//  the 2nd node is set to the 3rd node, "next_node".

printf("the link part of the second node isss %p\n",head-> link -> link);

		
			/*counting or printing the list */

	/*declaring a node and pointing the same as head for traversing*/
	my_node *ptr = head;
	int count = 1;
	while (ptr != NULL)
	{
		printf("%d. %d \n", count, ptr->data);
		count++;
		ptr = ptr->link;
	}
	printf("total count is %d\n",count - 1);
					



		/*insertion at the end of the array*/
	my_node *ptr_2end = head;
	while (ptr_2end -> link != NULL)
		{
			ptr_2end = ptr_2end -> link;
		}
	//the reason we dont use if (ptr_2end == NULL) in the while loop is beause once the ptr_2 end reach null it is not pointing to anything so we can not make changes on it.
	
	printf("\nokay, we are about to update the node here \n\n");
	ptr = malloc(sizeof(my_node));
	ptr -> data = 77;
	ptr ->link  = NULL;

    /* Update the link of the last node to point to the new node */
    ptr_2end->link = ptr;

	/* printing the nodes agian */
	ptr = head;
	count = 1;
	while (ptr != NULL)
	{
		printf("%d. %d \n", count, ptr->data);
		count++;
		ptr = ptr->link;
	}
	printf("total count is %d\n",count - 1);
/*if you want to can convert the code to node counting, printing, add at the end functions and simplify the code in the main function */
    return   0;
}
