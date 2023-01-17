/*Write a C program to print the sum of the cube of n natural numbers.
The sum of cubes of first 'n' natural no`s-
1^3+2^3+3^3+4^3+......+n^3=(n^2 * (n+1)^2)/4*/


#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("the sunm of cube of n natural number: %d",(n*n*(n+1)*(n+1))/4);
    return 0;
}