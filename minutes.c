#include <stdio.h>
int main(void){
int runningtime;
printf("enter movie running time: ");
scanf("%d", &runningtime);
int starthour;
int startmin;
printf("start time ");
scanf("%d:%d", &starthour, &startmin);
int hours = (runningtime / 60);
int minutes = (runningtime % 60);
int endhour = starthour + hours;
int endmin = startmin + minutes;
printf("The movie will last %d hr and %d min\n", hours, minutes);
printf("End time: %d:%d\n", endhour, endmin);

}
