#include <stdio.h>
int main() {
   unsigned int num = 10;
   print_binary(num);
   print_binary (13);
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
   return 0;
}

