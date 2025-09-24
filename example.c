#include <stdio.h>
#include <stdint.h>

int main (void)
{
 uint16_t x;
 printf("Enter x:");
 scanf("%hu", &x);
 printf("You entered x = %hu.\n", x);
 return 0;
}