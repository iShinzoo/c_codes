// The distance between two cities (in km.) is input through the keyboard. Write a C
// program to convert and print this distance in meters, feet, inches and centimeters.
// (Hint: 1 meter = 3.281 feet)


#include<stdio.h>
int main() {
    int d;
    printf("enter the d (km) : ");
    scanf("%d",&d);
    printf("the d in metre is : %d\n",d*1000);
    printf("the d in feets is : %d",d*3281);
    return 0;
}