#include<stdio.h>
int main() {
    int x;
    printf("enter the value for x : ");
    scanf("%d",&x);
    if(x>0){
        printf("positive");
    } else if (x<0){
        printf("negative");
    } else {
        printf("error 404");
    }
    return 0;
}