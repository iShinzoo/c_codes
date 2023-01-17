#include<stdio.h>
int main() {
    int age;
    printf("enter age");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("adult");
    }
    else {
        printf("kids");
    }
return 0;
}