#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*      calculating length of a string passed   */
                int i = 0, length = 0;
        while (str[i] != '\0')
        {
                length++;
                i++;
        }
	/*allocating a memeory for the new node */
	list_t *my_ptr  = malloc(sizeof(list_t));
	
	/*if the computer fails to allocate a room for it*/
	if(my_ptr == NULL)
		return (NULL);
	/*intalizing the allocating memory by the passed data*/ 
	my_ptr->str = strdup(str);
	my_ptr->len = length;
	my_ptr->next = NULL;

	/*creating the link btween the too / adding the new at the end of the old*/	
	if (*head == NULL)
		*head  = my_ptr;
	else
	{
		while (ptr_temp != NULL)
		{
		 *head = my_ptr;
                list_t *ptr_temp;
                ptr_temp = *head;
			ptr_temp = ptr_temp-> next;
		}
		ptr_temp -> next = my_ptr;
		
	}
	/*moving my_ptr to the beginning for the nodes would be printed*/
//	my_ptr = *head;


	return (*head);
}
