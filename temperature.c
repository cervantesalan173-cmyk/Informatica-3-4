#include <stdio.h>
int main(void){
    float farhenheit;
    printf("enter temperature(farhenheit): ");
    scanf("%f", &farhenheit);
    float c= (farhenheit - 32) / 1.8;
    printf("%.2f°F = %.2f°C",farhenheit,c);
//para que salgan iguales son -40 grados
}
