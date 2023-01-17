// If a four-digit number is input through the keyboard. Write a C program to obtain the
// sum of the first and last digit of this number.


#include<stdio.h>
int main() {
    int num,x,y;
    printf("enter the number : ");
    scanf("%d",&num);
    x=num/1000;
    y=num%10;
    printf("the output we need : %d",x+y);
    return 0;
}