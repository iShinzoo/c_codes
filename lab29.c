#include<stdio.h>
int main() {
int num,rev,temp,sum=0;
printf("Enter the number : ");
scanf("%d",&num);
temp=num;
while(num>0){
    rev=num%10;
    sum=(sum*10)+rev;
    num=num/10;
}
if(temp==sum){
    printf("palindrome");
} else{
    printf("not a palindrome");
}
return 0;
}