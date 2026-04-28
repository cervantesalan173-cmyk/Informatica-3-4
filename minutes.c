#include <stdio.h>
int main(void){
int minutes;
printf("enter minutes: ");
scanf("%d", &minutes);
int h = (minutes / 60);
printf("%dm =%dh",minutes,h);
}
