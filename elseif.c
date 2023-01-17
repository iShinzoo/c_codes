#include<stdio.h>
int main() {
    int age;
    printf("enter age");
    scanf("%d", &age);
    if(age>18)
    printf("adult");
    else if (age<18 && age>13)
    printf("teenager");
    else 
    printf("kids");
    return 0;
}