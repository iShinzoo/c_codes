// Write a C program to convert a given number of days into months and days.

#include<stdio.h>
int main() {
    int days;
    printf("enter the no. of days : ");
    scanf("%d", &days);
    printf("The no. of days into months : %d\n",days/30);
    int months;
    months=days/30;
    printf("the extra days : %d",days-30*months);
    return 0;
}