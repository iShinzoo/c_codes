#include<stdio.h>
int gcd(int x,int y);
int gcd(int x,int y){
    if(y==0)
    return x;
    return gcd(y,x%y);
}
int main() {
int x,y;
printf("Enter the value of x and y is : ");
scanf("%d %d",&x,&y);
printf("The gcd of %d and %d is %d.",x,y,gcd(x,y));
return 0;
}