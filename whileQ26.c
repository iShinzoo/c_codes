#include<stdio.h>
// to print sum of n natural number
int main() {
    int i=1,n,sum=0;
    printf("enter the positive integer :  ");
    scanf("%d", &n);
    while(i<=n){
        sum+=i;
        i++;
    } printf("the sum is :  %d", sum);
    return 0;
}