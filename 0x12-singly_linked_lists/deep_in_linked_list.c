//what is the problem now

#include <stdio.h>
#include <stdlib.h>

typedef struct my_node{
    
    int data;
    struct my_node * link;
}kuku;

int main()
{
    printf("Hello World\n");
    
    kuku* head = malloc(sizeof (struct my_node));
    head->data = 35;
    head->link = NULL;
    
    printf("the 1st value inmy nod is %d \n", head-> data);
    
    printf("the 1st add inmy nod is %p\n\n", head-> link);
    
    kuku * next = malloc(sizeof (struct my_node));
    next->data = 11;
    next -> link = NULL;
    head -> link = next;
    
    printf("the 2nd value in my nod is %d \n", next-> data);
    printf("the second add inmy nod is %p\n", next-> link);
    
    printf("the 1st add inmy nod is now %p\n", head-> link);
    
    next = malloc(sizeof (struct my_node));
    
    head->link->data =77;
    head->link->link->link= NULL;
    
    printf("the 3rd value in my nod is %d \n", head->link->link->data);
    printf("the second add inmy nod is %p\n",  head->link->link->link);
    
    printf("the 1st add inmy nod is now %p\n", head-> link);
    printf("the 2nd add in my nod is now %p\n", head-> link->link);
    return   0;
}

