#include <stdio.h>
#include <stdint.h>

int main (void)
{
//initializes x as a 16 bit unsigned integer
  uint16_t x;
  char repeat;
    do {
        printf("Please enter a value to convert to binary:");
        scanf(" %hu", &x);
//stores x as an integer in num to compare against 65535 ( x is still uninitialized "garbage")
        int num = x;
        printf("You entered x = %hu.\n", x);
//checks if num is greater than 65535, if so prompts user to enter a valid value
//Note: overflow and negatives are not handled, if user enters a value greater than 65535
// or less than 0 it wraps around
        if ( num > 65535 || num < 0) {
            printf("Value out of range, please enter a value between 0 and 65535.\n");
            break;
        }
//subtracts powers of 2 from num and prints 1 or 0 depending on if the power of 2 fits into num
        for (int diff = 32768; diff > 0; diff /= 2) {
            if (num >= diff){
                printf("1");
                num -= diff;
            } else {
                printf("0");
            }
        }   printf("\n");
//prompts user to repeat or exit
            printf("Try again? ");
            scanf(" %c", &repeat);
    } while (repeat == 'y');
     printf("\n");
}       
