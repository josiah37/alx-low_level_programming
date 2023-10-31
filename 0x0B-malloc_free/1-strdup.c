#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;  // Return NULL if str is NULL
    }
    
    // Allocate memory for the duplicate string
    char *duplicate = (char *)malloc(strlen(str) + 1);
    
    if (duplicate != NULL) {
        strcpy(duplicate, str);  // Copy the string to the newly allocated memory
    }
    
    return duplicate;  // Return the pointer to the duplicated string
}
