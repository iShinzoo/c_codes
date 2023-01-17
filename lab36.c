#include<stdio.h>
int main() {
int num,fact,r,temp,i,sum=0;
printf("Enter the number : ");
scanf("%d",&num);
temp=num;
while(num>0){
    r=num%10;
    i=1;
    fact=1;
    while(i<=r){
        fact=fact*i;
        i++;
    }
    sum=sum+fact;
    num=num/10;
}
if(temp==sum){
    printf("strong number ");
} else {
    printf(" not a strong number ");
}
return 0;
}