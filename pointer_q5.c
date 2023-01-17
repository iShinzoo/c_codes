#include<stdio.h>

void printadd(int a){
    
    printf("The address of a is : %u\n",&a);
}

int main() {
int i=8;
printf("The value of i is : %d\n",i);
printadd(i);
printf("The address  of i is : %u\n",&i);
return 0;
}