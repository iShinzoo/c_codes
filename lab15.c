// Any integer is input through the keyboard. Write a program to find out whether it is an
// odd number or even number.

#include<stdio.h>
int main() {
int n;
printf("enter the value for n : ");
scanf("%d",&n);
if(n%2==0){
    printf("yes , it is even number ");
} else {
    printf("it is a odd number ");
}
return 0;
}