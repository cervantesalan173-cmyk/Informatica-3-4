#include <stdio.h>
int main(void){
   float celcius;
   printf("enter celcius: ");
   scanf("%f",&celcius);
   float farhenheit = (celcius * 1.8) + 32;
   printf("%.2f°C = %.2f°F \n",celcius,farhenheit);
   if (celcius<0){
    printf("%.2f,❄️\t freezing weather\n",celcius);}
    else if (celcius<10){
    printf("%.2f,🥶\t very cold weather\n",celcius);}
    else if (celcius<20){
        printf("%.2f,🧥\t chilly weather\n",celcius);}
    else if (celcius<30){
        printf("%.2f,🖼️\t normal weather\n",celcius);}
    else if (celcius<40){
        printf("%.2f,☀️\t hot weather\n",celcius);}
    else if (celcius>40){
        printf("%.2f,🔥\t very hot weather\n",celcius);}
    }
