// Write a Program (WAP) to add two numbers and display/print the sum.

#include<stdio.h>
int main() {
    int x,y;
    printf("enter x and y :  ");
    scanf("%d %d", &x,&y);
    int a = x+y;
    printf("The sum of x and y is : %d", a);
    return 0;
}