
/*Write a C program to print the sum of the square of n natural numbers. The sum of
squares of first 'n' natural no`s-
1^2+2^2+3^2+.....+n^2=n*(n+1)*(2n+1)/6*/


#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("the sum of square of n natural number : %d", (n*(n+1)*(n+n+1))/6);
    return 0;
}