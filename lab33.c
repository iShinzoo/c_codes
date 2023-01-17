#include<stdio.h>
int main() {
int N,sum=0;
printf("Enter the value for N : ");
scanf("%d",&N);
for(int i=1;i<=N;i++){
    sum=sum+i;
}
printf("The sum N number is : %d\n",sum);
printf("The average of N number is : %d",sum/N);
return 0;
}