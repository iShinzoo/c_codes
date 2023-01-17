#include<stdio.h>
int main() {
int num,div;
printf("enter the number : ");
scanf("%d",&num);
for(div=1;div<=num;div++){
    if(num%div==0){
printf("the divisors are : %d\n",div); 
    } 
}
return 0;
}