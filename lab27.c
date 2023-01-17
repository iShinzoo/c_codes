// Write a program to count the number of digits in a given number.

#include<stdio.h>
int main() {
int count=0 , num;
printf("Enter the number : ");
scanf("%d",&num);
while(num>0){
    num=num/10;
    count++;
}
printf("The number of digits is : %d", count);
return 0;
}