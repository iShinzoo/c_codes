#include<stdio.h>
int main() {
int x,y,power;
printf("Enter the value of x and y : ");
scanf("%d%d",&x,&y);
power=1;
for(int i=1;i<=y;i++){
    power=power*x;
} 
printf("The x to the power y is : %d",power);
return 0;
}