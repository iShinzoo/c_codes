#include<stdio.h>
int main() {
    int p,q,r,s;
    printf("Enter p , q and r : ");
    scanf("%d %d %d", &p,&q,&r);
    s=p>q?(p>r?p:r):(q>r?q:r);
    printf("The biggest number is : %d",s);
    return 0;
}