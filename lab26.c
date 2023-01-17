// Write a C program to print the sum of n natural numbers.
// The sum of first 'n' natural no`s - 1+2+3+....+n.

#include<stdio.h>
int main() {
int sum=0, n;
printf("Enter the value for n : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum=sum+i;
}
printf("The sum of n natural number is : %d",sum);
return 0;
}