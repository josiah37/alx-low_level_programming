#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	/*	calculating length of a string passed	*/
		int i = 0, length = 0;
	while (str[i] != '\0')
	{
	 	length++;
		i++;
	}
	/*	creating the new node and intalizing it */
	list_t *ptr = malloc (sizeof (list_t));
	/*condition if room is not allocated for the struct members*/
	if (ptr == NULL)
		return(NULL);
	ptr->str = strdup(str);
	ptr -> len = length;
	ptr -> next = NULL;
	
	/*linking the new node at the beginning of the liked node(s)	*/
		ptr  -> next = *head;

	/*moving the head to the new 1st node */
	*head = ptr; /*both pointing 2 z 1st node at this point*/

	/*  returning the singly pointer head is not nessaary . since this is 
	passed by reference(what the parameter got is the actual pointer adress) the head
	would be automatically updated in the main function.*/ 
	return (*head);

}

