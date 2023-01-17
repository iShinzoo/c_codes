#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main() {
int a=4,b=5;
printf("The value of x and y before swap are %d and %d\n",a,b);
// wrong_swap(a,b); will not work due to call by value
swap(&a,&b);
printf("The value of x and y after swap are %d and %d\n",a,b);
return 0;
}
void wrong_swap(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
}
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}