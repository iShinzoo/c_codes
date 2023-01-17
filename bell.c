#include<stdio.h>
int main() {
    int i=1;
    int n;
    printf("enter n");
    scanf("%d", &n);
    do {
        printf("%d", n*(n+1)/2);
    } while(i<=n);
    break;
    return 0;
}