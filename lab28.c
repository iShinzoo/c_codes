// Write a program to find the sum of digits in a given number.

#include<stdio.h>
int main() {
int num,sum=0;
printf("Enter the number : ");
scanf("%d",&num);
while(num!=0){
    sum=sum+num%10;
    num=num/10;
}
printf("The sum of digits in a number is %d.",sum);
return 0;
}