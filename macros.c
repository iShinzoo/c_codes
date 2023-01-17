#include<stdio.h>
#define INCREMENT(x) ++x
int main() {
    char *ptr="geeksquiz";
    int x=10;
    printf("%s ""%d",INCREMENT(ptr),INCREMENT(x));
           return 0;
} 