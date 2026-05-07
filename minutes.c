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
if (endmin >= 60){
    endhour = endhour + (endmin / 60); //update value of endhour variable
    endmin = endmin % 60;              //update the value of endmin varibale
}
printf("The movie will last %d hr and %d min\n", hours, minutes);
printf("End time: %d:%02d\n", endhour, endmin);

}
