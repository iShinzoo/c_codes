#include<stdio.h>
int main() {
int x=6;
int *ptr;
ptr=&x;

printf("the adress of x is : %u\n",ptr);
printf("the value of x is : %d",*ptr);

return 0;
}