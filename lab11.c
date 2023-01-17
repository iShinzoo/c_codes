// If a three-digit number is input through the keyboard. Write a C program to reverse the
// number.


#include<stdio.h>
int main() {
int num,x,y,z;
printf("Enter the 3 digit number : ");
scanf("%d", &num);
x=num%10;
num=num/10;
y=num%10;
num=num/10;
z=num%10;
num=num/10;
printf("The reverse of the number is %d", x*100+y*10+z*1);
return 0;
}