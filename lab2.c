// Write a C program that takes twhreenumbers as an input and print the average them.

#include<stdio.h>
int main() {
int a , b , c , x;
printf("enter a , b and c : ");
scanf("%d %d %d", &a , &b , &c);
x = (a+b+c);
printf("the avreage of 3 numbers are : %d", x/3);
return 0;
}
