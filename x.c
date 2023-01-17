#include<stdio.h>
int main() {
    int num;
    printf("enter num");
    scanf("%d", &num);
    if(num>0) {
        printf("positive");
    
        if(num%2==0)
       { 
            printf("\neven");
        }
            else {
            printf("\nodd");
        }}
        else {
        printf("negative");
    }
    return 0;
}