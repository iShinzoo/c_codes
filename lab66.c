/*Write a Menu Driven program to find addition, subtraction, multiplication and division all
using one user defined function for each operation.*/

#include<stdio.h>
int addition(int x,int y);
int subtraction(int x,int y);
int division(int x,int y);
int multiplication(int x,int y);
int main() {
int x,y;
printf("Enter the value of x and y : ");
scanf("%d %d", &x , &y);
printf("The addition of %d and %d is %d.\n",x,y,addition(x,y));
printf("The subtraction of %d and %d is %d.\n",x,y,subtraction(x,y));
printf("The division of %d and %d is %d.\n",x,y,division(x,y));
printf("The multiplication of %d and %d is %d.",x,y,multiplication(x,y));
return 0;
}
int addition(int x,int y){
return x+y;
}
int subtraction(int x,int y){
return x-y;
}
int division(int x,int y){
return x/y;
}
int multiplication(int x,int y){
return x*y;
}