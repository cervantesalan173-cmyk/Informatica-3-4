#include <stdio.h>
// .1 prototype
void c_to_f(void);
void f_to_c(void);
int main(void){
    int user_response;
    printf("Temperature Converter\n");
    printf("Select an option: \n");
    printf("1. Celsius to fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &user_response);
if (user_response == 1){
c_to_f();
}
c_to_f();
f_to_c();
}

//2.Definition
void c_to_f(void){
    int c;
    printf("What is the temperature in celcius?; ");
    scanf("%d",&c);
    int f = (c * 1.8)+32;
    printf("%d°C = %d°F\n",c, f);
}
void f_to_c(void){
    int f;
    printf("What is the temperature in farhenheit?: ");
    scanf("%d",&f);
    int c = (f - 32) / 1.8;
}
