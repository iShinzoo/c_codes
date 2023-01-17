#include<stdio.h>
int main() {
    int y,d;
    printf("type y");
    scanf("%d", &y);
    if (y%4==0)
    {
        printf("leap year");
    }
    else if (y%100==0) {
    printf("not a leap year");
    }
    else if (y%400==0) {
        printf("leap year");
    }
    else {
    printf("not a leap year");
    }
    return 0;
}