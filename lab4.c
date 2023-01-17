/*Write a C program to print the sum of n natural numbers.
The sum of first 'n' natural no`s-
1+2+3+.....+n=n*(n+1)/2*/

#include<stdio.h>
int main() {
    // sum of n natural numbers 
    int n;
    printf(" enter the value of n : ");
    scanf("%d", &n);
    printf("the sum of n natural numbers is : %d",n*(n+1)/2);
    return 0;
}