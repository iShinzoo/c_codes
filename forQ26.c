#include<stdio.h>
// to print sum of n natural number 
int main() {
    int n,i,sum=0;
    printf("enter the positive integer :  ");
    scanf("%d", &n);
    for(i=1;i<=n;++i){
        sum+=i;
    } printf("the sum is : %d", sum);
    return 0;
}