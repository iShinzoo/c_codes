#include<stdio.h>
int sum(int a , int b){
    int c;
     c=a+b;
    a=343343;
    b=838993;
    return c;
}
int main() {
int a=5,b=6;
printf("The value  of a and b is before is %d and %d\n" , a,b);
printf("The sum of a and b is : %d\n",sum(a,b));
printf("The value  of a and b is after is %d and %d " , a,b);
return 0;
}