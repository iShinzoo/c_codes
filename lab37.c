#include<stdio.h>
#include<math.h>
int main() {
int num,r,temp,i,sum=0,power;
printf("Enter the number : ");
scanf("%d",&num);
temp=num;
while(num>0){
    r=num%10;
    i=1;
    if(num!=0){
        power=pow(r,3);
    }
    sum=sum+power;
    num=num/10;
}
if(temp==sum){
    printf("armstrong number ");
} else {
    printf("not a armstrong number");
}
return 0;
}