#include <stdio.h>

int main(void){
    int lenght;
    int width;
    int area;
    int perimeter;
    printf("enter lenght: ");
    scanf("%d", &lenght);
    printf("enter width: ");
    scanf("%d", &width);
    area = lenght * width;
    perimeter = 2*(lenght + width);
}

