#include <stdio.h>
void add(void);
void sub(void);
void mult(void);
void div(void);


void add(void){



    float add1;
    float add2;
    printf("first number?: ");
    scanf("%f",&add1);
    printf("secod number?: ");
    scanf("%f",&add2);
    float result = add1 + add2;
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
        float result = div1 / div2;
        if (div2=0){
            printf("math error\n");
        } else{
            printf("%.2f\n",result);
        }

        printf("the answer: %.2f\n",result);
    }
    int main(void){
        int user_response;
        printf("hello im calculator\n");
        printf("select option:\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. division\n");
        scanf("%d",&user_response);

        if (user_response == 1){
            add();
        } else if (user_response == 2){
            sub();
        }else if (user_response == 3){
            mult();
        }else if (user_response == 4){
            div();
        }
        else {
            printf("invalid opiton\n");
        }
    }

