#include <stdio.h>

int main(void){
    int year;
    char x = 'y';
    while( x == 'y'){
        printf("Enter year!!");
        scanf(" %d", &year);
        if (year%400 == 0) {
            printf("%d was a leap year", year);

        }else if (year%100 == 0) {
            printf("%d was not a leap year", year);
        } else if (year%4 == 0) {
            printf("%d was a leap year", year);
        } else {
            printf("%d was not a leap year", year);
        } 
    printf("\nRun leap year checker (y/n)?\n");
    scanf(" %c", &x);
}
return 0;

}
