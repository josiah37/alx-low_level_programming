#include "header.h"

int main()
{
printf("hello there\n");
float  kg = 60;
float kumet = 1.71;
printf("your bmi is: %.2f\n", bmi_finder(kg, kumet));

kg = 80;
kumet = 1.79;
printf("your bmi is: %.2f\n", bmi_finder(kg,kumet));
return 0;
}
