/*
 * COMP 211
 * Practice with core C programming instructions
 *
 * A program that performs multiplication using bit shifts.
 *
 */

#include <stdio.h>
#include <stdint.h>

#define WIDTH 16

int main(void) {

    uint16_t x;
    uint16_t multiplier;
    char repeat;

    do {
        // Get values from user, store as unsigned short
        printf("Please enter a value to multiply: ");
        scanf(" %hu", &x);
        printf("Please enter a multiplier value: ");
        scanf(" %hu", &multiplier);
        printf("You entered x = %hu, multiplier = %hu.\n", x, multiplier);

        // Bit shift to multiply x by 2
        // printf("%u * 2 = %u!\n", x, x << 1);

        // Bit shift to multiply x by multiplier
        uint16_t temp = multiplier;
        uint16_t product = 0;
        for (uint16_t i = WIDTH; i >= 0; i--){

            //printf("i = %hu, temp = %hu, product = %hu, temp >> i = %hu\n", i, temp, product, temp >> i);
            printf("i = %hu, temp = %hu, product = %hu, temp >> i = %d\n", i, temp, product, temp >> i);

            // Add x * 2^i to product
            if ((temp >> i) != 0) {
                product += x << i;
            }

            // Zero out ith bit if set
            temp <<= WIDTH - i;
            temp >>= WIDTH - i;

            if (i == 0) { break; }
        }
        // Our final answer
        printf("product = %hu\n", product);

        // Repeat loop?
        printf("Try again? ");
        scanf(" %c", &repeat);

    } while (repeat == 'y');
}