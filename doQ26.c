#include<stdio.h>
// to print sum of n natural number
int main() {
    int i,n,sum=0;
    do { 
        printf("enter the positive integer :  ");
        scanf("%d", &n);
    } while(i<=n);
    for(i=1;i<=n;i++) {
        sum+=i;
    } printf("the sum is : %d",sum);
    return 0;
}