#include<stdio.h>
int fact(int x);
int main() {
int x;
printf("Enter the value for x is : ");
scanf("%d",&x);
printf("The factorial of %d is %d.",x,fact(x));
return 0;
}

int fact(int x){
    if(x==0||x==1)
    return 1;
    return x*fact(x-1);
}