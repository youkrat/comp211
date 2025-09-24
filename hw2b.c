//Ben Kimani [WesId: 419496]
//HW2b
#include <stdio.h>

int main (void)
{
    char x;

    do {
        printf("Enter lower-case letter to encrypt: ");
        scanf(" %c", &x);
        if (x < 97 || x > 122) {
            printf("Error: User did not enter lower-case letter, exiting\n");
            break;
        }
        else {
            int shift;
            printf("Enter the shift amount for the Caesar cipher: ");
            scanf(" %d", &shift);
            if (shift > 26)
            {
                shift = shift - 26;
            }
            printf("Ciphertext is:  %c\n", x + shift);
        }
        printf("Try again? ");
        scanf(" %c", &x);
        

    } while (x == 'y');
    printf("\n");

}