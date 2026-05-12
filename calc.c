#include <stdio.h>
void add(void);
void sub(void);
void mult(void);
void div(void);
void ad(void);
int main(void){
    float ad1;
    float ad2;
    printf("first number?: ");
    scanf("%f",&ad1);
    printf("secod number?: ");
    scanf("%f",&ad2);
    float result = ad1 + ad2;
    printf("the answer: %.2f\n", result);
}
void sub(void){
    float sub1;
    float sub2;
    printf("first number?: ");
    scanf("%f",&sub1);
    printf("second number?: ");
    scanf("%f",&sub2);
    float result = sub1 - sub2;
    printf("the answer: %.2f\n",result);
}
    void mult(void){
        float mult1;
        float mult2;
        printf("first number?: ");
        scanf("%f",&mult1);
        printf("second number?: ");
        scanf("%f",&mult2);
        float result = mult1 * mult2;
        printf("the answer: %.2f\n",result);
    }
    void div(void){
        float div1;
        float div2;
        printf("first number?: ");
        scanf("%f",&div1);
    }
