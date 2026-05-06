#include <stdio.h>
int main(void){
    int a = 5; // = means assignment
    int b = 5;
    int c = 10; //we created three variables

    printf("%d == %d is %d \n",a,b,a == b); // ==means comparison
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d != %d is %d \n",a,c,a != c);

    //program that identifies negative numbers
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("%d is a negative nunmber. \n", number);
    } else {
        printf("%d is a positive number. \n", number);
    }
}

